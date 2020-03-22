inicio, fim = map(int,input().split())

if inicio == fim:
    print('O JOGO DUROU 24 HORA(S)')
elif inicio < fim:
    tempo = fim - inicio
    print('O JOGO DUROU', tempo, 'HORA(S)')
else:
    tempo = 24 - inicio + fim
    print('O JOGO DUROU', tempo, 'HORA(S)')