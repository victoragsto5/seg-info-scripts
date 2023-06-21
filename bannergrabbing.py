import socket

ip = input("Type the ip:")
port = int(input("Type the port:"))

mysocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
mysocket.connect((ip, port))
banner = mysocket.recv(1024)
print(banner)