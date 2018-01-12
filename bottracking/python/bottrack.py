import socket
import numpy as np
from multiprocessing import Array, Value, Process
import cv2
from time import sleep

NUMBOTS = 12
MEMORYDEPTH = 10
HOSTNAME = "localhost"
PORT = 1917

class pos():
    def __init__(self):
        xpos = np.zeros(MEMORYDEPTH*NUMBOTS,dtype=np.int16,order="C")
        ypos = np.zeros(MEMORYDEPTH*NUMBOTS,dtype=np.int16,order="C")

        self.ids = np.zeros(NUMBOTS,dtype=np.int16,order = "C")
        self.xpos = Array('I', xpos)
        self.ypos = Array('I', ypos)
        self.latest =  Value('I', 0, lock=True)
        self.cap = cv2.VideoCapture(0)

        self.iter = 0

    def updatepos(self):
        while True:
            ret, frame = self.cap.read()
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            with self.latest.get_lock():
                self.latest.value = 5
            with self.xpos.get_lock():
                self.xpos[self.iter%NUMBOTS] = self.iter
            with self.ypos.get_lock():
                self.ypos[self.iter%NUMBOTS] = self.iter
            self.iter += 1


if __name__=="__main__":
   cam_proc = pos()
   pos_proc = Process(target = cam_proc.updatepos)
   pos_proc.start()

   s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
   s.bind((HOSTNAME, PORT))
   while True:
       s.listen(1)
       conn, addr = s.accept()
       with cam_proc.xpos.get_lock():
           conn.send(np.frombuffer(cam_proc.xpos.get_obj(),
                                   dtype=np.int16)[cam_proc.latest.value*NUMBOTS:cam_proc.latest.value*NUMBOTS+NUMBOTS])
       with cam_proc.ypos.get_lock():
           conn.send(np.frombuffer(cam_proc.ypos.get_obj(),
                                   dtype=np.int16)[cam_proc.latest.value*NUMBOTS:cam_proc.latest.value*NUMBOTS+NUMBOTS])

