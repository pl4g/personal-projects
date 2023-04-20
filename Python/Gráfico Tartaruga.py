import turtle
while True:
    range1 = int(input("Range: "))
    fd1 = int(input("FD: "))
    rt1 = int(input("RT: "))
    def oi():
        for x in range(range1):
            turtle.fd(fd1)
            turtle.rt(rt1)
    oi()
