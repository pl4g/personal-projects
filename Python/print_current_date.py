import datetime # importa a data
import Fim
import locale

loc = locale.setlocale(locale.LC_ALL, "Portuguese")
print(loc)
tempo = datetime.datetime.now()   #pega a data do pc
dia = tempo.day # transforma em dia e atribiui à uma variável
mês = tempo.month # transforma em mês e atribiui à uma variável
ano = tempo.year # transforma em ano e atribiui à uma variável

print(tempo.strftime("%d de %B de %Y"))

if mês == 1: 
    print("{0} de janeiro de {1}".format(dia,ano))
elif mês == 2:
    print("{0} de fevereiro de {1}".format(dia,ano))
elif mês == 3:
    print("{0} de março de {1}".format(dia,ano))
elif mês == 4:
    print("{0} de abril de {1}".format(dia,ano))
elif mês == 5:
    print("{0} de maio de {1}".format(dia,ano))
elif mês == 6:
    print("{0} de junho de {1}".format(dia,ano))
elif mês == 7:
    print("{0} de julho de {1}".format(dia,ano))
elif mês == 8:
    print("{0} de agosto de {1}".format(dia,ano))
elif mês == 9:
    print("{0} de setembro de {1}".format(dia,ano))
elif mês == 10:
    print("{0} de outubro de {1}".format(dia,ano))
elif mês == 11:
    print("{0} de novembro de {1}".format(dia,ano))
elif mês == 12:
    print("{0} de dezembro de {1}".format(dia,ano))
Fim.fim()
