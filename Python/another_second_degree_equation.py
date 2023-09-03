#pedir o valor de A, B e C, respectivamente
import Fim
a = float(input("Digite o valor de a: "))
b = float(input("Digite o valor de b: "))
c = float(input("Digite o valor de c: "))
#calcula a formula para achar Delta

delta = b ** 2 - 4 * a * c     #calculo para achar delta
import math        #importa raiz quadrada da biblioteca math(matematica)
raiz = eval(math.sqrt(delta))              #calcula a raiz de delta
x1 = (-b + raiz) / (2 * a)       #calcula x1  
x2 = (-b - raiz) / (2 * a)      # calcula x2 =/= entre x1 e x2 é -b + ou - raiz de delta
if raiz < 0: # se a raiz for menor q 0 faça:
    print("Não existem raizes de delta reais.;")
elif raiz == 0: # se a raiz for 0 faça:
    print("Existem 2 raizes de delta, as quais são iguais.");
else: # senão, o programa ja vê que a raiz é maior que 0 então ele faz:
    print("Existem 2 raizes de delta, as quais são diferentes.")
print("Delta é igual a: {:.2f}".format(delta))
print("O valor de X1 é igual a: {:.2f} ".format(x1))
print("O valor de X2 é igual a: {:.2f}".format(x2))

Fim.fim()
