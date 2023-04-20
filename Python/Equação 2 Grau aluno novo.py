#PERGUNTA AO USUÁRIO O VALOR DOS COEFICIENTES DA EQUAÇÃO.
a = input("Digite o valor de A: ")
b = input("Digite o valor de B: ")
c = input("Digite o valor de C: ")

delta = (b * b - 4 * a * c)
x1 = (-(b) + delta ** 1/2) / 2 * a
x2 = (-(b) - delta ** 1/2) / 2 * a

if delta > 0:
    print("Existem duas raizes reais diferentes.")
    print("O primeiro valor de x é igual à: ", x1)
    print("O segundo valor de x é igual à: ", x2)
elif delta == 0:
    print("Existem duas raizes reais iguais.")
    print("O valor de x é igual à:", x1)
else:
    print("Não existem raizes reais.")
