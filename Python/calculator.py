print("Esta calculadora faz calculos com: Adições, Subtrações, Diviões, Multiplições, Potenciações e Radiciações")
print("Para Adições use: + ")
print("Para Subtrações use: - ")
print("Para Divisões use: / ")
print("Para Multiplicações use: x ou * ")
print("Para Potenciações use: xx ou ** ")
print("Para Radiciação use: RQ ou V ")
print("Para sair digite algo que não seje um dos vistos acima, após isso poderá ocorrer um erro em sua tela, mas não se preocupe.")
import Fim
while True:
    try:
        op = input("Digite o operador de seu calculo: ")
        if op == "+":
            A = int(input('Digite um primeiro valor: '))
            B = int(input('Digite um segundo valor: '))
            R = A + B
            print("Resultado: R = %.1f" % R)
            Fim.fim()
        elif op == "-":
            A = int(input('Digite um primeiro valor: '))
            B = int(input('Digite um segundo valor: '))
            R = A - B
            print("Resultado: R = %.1f" % R)
            Fim.fim()
        elif op == "x" or op == "*":
            A = int(input('Digite um primeiro valor: '))
            B = int(input('Digite um segundo valor: '))
            R = A * B
            print("Resultado: R = %.1f" % R)
            Fim.fim()
        elif op == "/":
            A = int(input('Digite um primeiro valor: '))
            B = int(input('Digite um segundo valor: '))
            R = A / B
            print("Resultado: R = %.1f" % R)
            Fim.fim()
        elif op == "xx" or  op == "**":
            A = int(input('Digite um primeiro valor: '))
            B = int(input('Digite um segundo valor: '))
            R = A ** B
            print("Resultado: R = %.1f" % R)
            Fim.fim()
        elif op == "RQ" or  op == "V":
            from math import sqrt
            A = input('Digite um valor: ')
            if A == "tua mae":
                print("Raiz quadrada da tua mãe é infinito")
                Fim.fim()
            else:
                R = sqrt(A)
                print("Resultado: R = %.1f" % R)
                Fim.fim()
        else:
            Fim.fim()
    except ZeroDivisionError:
        print("Não é possivel calcular uma divisão por zero.")
        Fim.fim()
    except ValueError:
        print("Valor desconhecido, por favor digite valores validos")
        Fim.fim()
    except TypeError:
        print("Não é possivel calcular com este tipo de variável")
        Fim.fim()
    except:
        print("Erro desconhecido, tente novamente.")
        Fim.fim()
