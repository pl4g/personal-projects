import Python.Fim
print("Caro cliente, você terá de colocar os valores de suas faturas.")
confirm = str(input("Digite OK se você está de acordo: "))
if confirm == "OK":
    #Casa
    luz = float(input("Digite o valor de sua fatura de luz: "))
    água = float(input("Digite o valor de sua fatura de água: "))
    internet = float(input("Digite o valor de sua fatura de internet: "))
    iptu = float(input("Digite o valor de seu IPTU: "))
    ipva = float(input("Digite o valor de seu IPVA: "))
    inss = float(input("Digite o valor de seu INSS: "))
    segurvida = float(input("Digite o valor de seu seguro de vida: "))
    segurcar = float(input("Digite o valor de seu seguro do carro: "))
    card = float(input("Digite o valor de seu cartão: "))
    telefonesoma = 0
    telnum = int(input("Número de faturas de telefone: "))
    while telnum > 0:
        telefone = float(input("Digite o valor de sua fatura de telefone: "))
        telnum = telnum - 1
        telefonesoma = telefonesoma + telefone
    totcas = luz + água + internet + telefonesoma + iptu + ipva + inss + segurvida + segurcar + card
    #Mercado
    vez1 = 1
    soma = 0
    while vez1 != 0:
        print("Para não se perder marque os produtos comprados.")
        prod1 = str(input("Qual o produto comprado? "))
        val1 = float(input("Qual o valor do produto? "))
        vez1 = str(input("Deseja continuar? "))
        soma = soma + val1
        if vez1 == "sim":
            continue
        else:
            break
    #Lazer
    vez2 = 1
    soma1 = 0
    while vez2 != 0:
        print("Digite agora os seus gastos pessoais.(um de cada vez, porfavor)")
        prod2 = str(input("Onde foi seu gasto pessoal: "))
        val2 = float(input("Qual o valor ? "))
        vez2 = str(input("Deseja continuar? "))
        soma1 = soma1 + val2
        if vez2 == "sim":
            continue
        else:
            break
    #Ganhos
    vez3 = 1
    soma2 = 0
    while vez3 != 0:
        print("Digite agora os seus ganhos.(um de cada vez, porfavor)")
        prod3 = str(input("Digite seus ganhos neste mês: "))
        val3 = float(input("Qual o valor ? "))
        vez3 = str(input("Deseja continuar? "))
        soma2 = soma2 + val3
        if vez3 == "sim":
            continue
        else:
            break
    desp = soma + totcas + soma1
    total = soma2 - desp
    despperct = desp / soma2 * 100
    totalperct = 100 - despperct
    perctcas = totcas / soma2 * 100
    perctmkt = soma / soma2 * 100
    perctpes = soma1 / soma2 * 100
    perctsob = total / soma2 * 100
    print("Seu valor das faturas de casa foi de: R$: {0:.2f}".format(totcas))
    print("A porcentagem de gastos nas suas faturas de casa foram de: R$: {0:.2f}".format(perctcas))
    print("Seu valor dos gastos no mercado foi de: R$: {0:.2f}".format(soma))
    print("A porcentagem de gastos nas suas faturas no mercado foi de: R$: {0:.2f}".format(perctmkt))
    print("Seu valor de gastos pessoais foi de: R$: {0:.2f}".format(soma1))
    print("A porcentagem de gastos pessoais foram de: R$: {0:.2f}".format(perctpes))
    print("Seus ganhos neste mês foram de: R$: {0:.2f}".format(soma2))
    print("Suas despezas totais foram de: R$: {0:.2f}".format(desp))
    print("Neste mês sobrou: R$: {0:.2f}".format(total))
    print("A porcentagem dos gastos pra ganhos foi de: {0:.2f}".format(despperct))
    print("A porcentagem de sobra pra ganhos foi de: {0:.2f}".format(totalperct))
    if desp > soma2:
        print("Você ta fudido, vai fica devendo. :D")
    elif desp < soma2:
        print("Ta com dinheiro aí ein, empresta pra mim, prometo devolver. :)")
Python.Fim.fim()
