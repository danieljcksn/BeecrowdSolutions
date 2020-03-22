a, b, c = input().split()
a = float(a)
b = float(b)
c = float(c)

abs1 = abs(b-c)
abs2 = abs(a-c)
abs3 = abs(a-b)
if abs1 < a and a < b+c:
    if abs2 < b and b < a+c:
        if abs3 < c and c < a+b:
            perimetro = a + b + c
            print('Perimetro = {:.1f}'.format(perimetro))
else:
    trapezio = ((a+b)/2)*c
    print('Area = {:.1f}'.format(trapezio))