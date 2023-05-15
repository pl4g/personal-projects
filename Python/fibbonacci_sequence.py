T1 = 1
T2 = 1
cont = 0
n = int(input("Até quando deseja repetir?"))
print("Termo 1 = 1")
print("Termo 2 = 1")
while cont < n - 2:
    cont = cont + 1
    fib = T1 + T2
    print("Termo", cont + 2,'=',fib)
    T1 = T2
    T2 = fib
import Python.Fim
Python.Fim.fim()
