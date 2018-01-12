import socket
from time import time
port = 5842
hostname = "localhost"
s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.bind((hostname,port))
while 1:
    s.listen(1)
    conn,addr = s.accept()
    data = conn.recv(64)
    conn.send(data)
conn.close()
