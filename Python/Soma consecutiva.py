Soma =  0
Qtde = 0
while True:
    x = int(input("Digite um valor: "))
    if x == 0:
        break
    if x != 0:
        Qtde = Qtde + 1
        Soma = Soma + x
print("Quantidade de Valores digitados: ", Qtde)
print("A soma dos valores é de:", Soma)
import Python.Fim
Python.Fim.fim()