#Questão 1038 - Lanche - URI Online Judge
codigo, quantidade = input().split()
#Função que divide as entradas em substrings, afinal, o input sempre retorna uma string

# Para realizar operações aritméticas, é necessário converter os números para o tipo desejado
codigo = int(codigo)
quantidade = int(quantidade)

if codigo == 1:
    total = float(4 * quantidade)
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 2:
    total = float(4.5 * quantidade)
    #Esse é um modo interessante de imprimir valores flutuantes com a quantidade desejada de casas decimais
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 3:
    total = float(5 * quantidade)
    #Outro meio de realizar a mesma operação
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 4:
    total = float(2 * quantidade)
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 5:
    total = float(1.5 * quantidade)
    print('Total: R$ {:.2f}'.format(total))
