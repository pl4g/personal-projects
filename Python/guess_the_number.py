import random
randint1 = random.randint(0, 1)
tent = 0
while True:
    num = int(input("Dê um número de 0 a 1: "))
    if num > randint1:
        print("Tente um número menor.")
        tent += 1
        continue
    if num < randint1:
        print("Tente um número maior.")
        tent += 1
        continue
    if num == randint1:
        print("Você acertou na", tent, "ª tentativa!")
        import Python.Fim
        Python.Fim.fim()
        break

