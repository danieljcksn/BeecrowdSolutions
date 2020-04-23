#Questão 1044 - Múltiplos - URI Online Judge
a, b = input().split()

a = int(a)
b = int(b)

resto1 = int(b % a)
resto2 = int(a % b)
if (resto1 == 0) or (resto2 == 0):
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')
