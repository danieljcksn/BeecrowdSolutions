#Questão 1061 - Tempo de um Evento - URI Online Judge
di = input().split(" ")
w = int(di[1])
hi = input().split(" ")
x = int(hi[0])
y = int(hi[2])
z = int(hi[4])

df = input().split(" ")
w1 = int(df[1])
hf = input().split(" ")
x1 = int(hf[0])
y1 = int(hf[2])
z1 = int(hf[4])

# Execução

dia = w1 - w  # Dia final - dia inicial

hora = x1 - x  # Hora final - hora incial
if (hora < 0):
    hora = 24 + hora
    dia = dia - 1

minuto = y1 - y  # Minuto final - minuto inicial
if (minuto < 0):
    minuto = 60 + minuto
    hora = hora - 1

segundos = z1 - z  # Segundos inicial - segundos final
if (segundos < 0):
    segundos = 60 + segundos
    minuto = minuto - 1

if (dia <= 0):
    dia = 0

print("%d dia(s)" % dia)
print("%d hora(s)" % hora)
print("%d minuto(s)" % minuto)
print("%d segundo(s)" % segundos)
