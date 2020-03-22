salario = float(input())

if salario <= 400:
    novosalario = salario + 0.15*salario
    print('Novo salario: {:.2f}'.format(novosalario))
    print('Reajuste ganho: {:.2f}'.format(novosalario-salario))
    print('Em percentual: 15 %')
elif salario <= 800:
    novosalario = salario + 0.12 * salario
    print('Novo salario: {:.2f}'.format(novosalario))
    print('Reajuste ganho: {:.2f}'.format(novosalario-salario))
    print('Em percentual: 12 %')
elif salario <= 1200:
    novosalario = salario + 0.10 * salario
    print('Novo salario: {:.2f}'.format(novosalario))
    print('Reajuste ganho: {:.2f}'.format(novosalario-salario))
    print('Em percentual: 10 %')
elif salario <= 2000:
    novosalario = salario + 0.07 * salario
    print('Novo salario: {:.2f}'.format(novosalario))
    print('Reajuste ganho: {:.2f}'.format(novosalario-salario))
    print('Em percentual: 7 %')
else:
    novosalario = salario + 0.04 * salario
    print('Novo salario: {:.2f}'.format(novosalario))
    print('Reajuste ganho: {:.2f}'.format(novosalario-salario))
    print('Em percentual: 4 %')

