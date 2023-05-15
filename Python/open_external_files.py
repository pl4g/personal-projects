import os
while True:
    try:
        print("Obs: Se for uma pagina na Web use https://") #Adendo sobre a abertura de sites.
        local = str(input("Digite o Local ou Página da Web para abrir em seu PC: ")) #Pega do usuário o local que e deve abrir.
        os.startfile(local) #Comando que abre arquivos.
    except ValueError:
        print("ERRO DE VALORES")
        print("Digite um valor válido")
        input("Fim do Programa.")
        break
    except TypeError:
        print("ERRO 404")
        print("Não é possivel encontrar um local.")
        input("Fim do Programa.")
        break
    except:
        print("ERRO DESCONHECIDO.")
        print("Tente novamente.")
        continue
