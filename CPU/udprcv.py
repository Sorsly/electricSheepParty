from socket import *
import sys
import select

host="192.168.42.23"
port = 1918
s = socket(AF_INET,SOCK_DGRAM)
s.bind((host,port))

addr = (host,port)
buf=1024

while True:
    data,addr = s.recvfrom(buf)
    print "Received File:",data
