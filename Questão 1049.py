entrada1 = input()
entrada2 = input()
entrada3 = input()

if entrada1 == 'vertebrado':
    if entrada2 == 'ave':
        if entrada3 == 'carnivoro':
            print('aguia')
        else:
            print('pomba')
    else:
        if entrada3 == 'onivoro':
            print('homem')
        else:
            print('vaca')

else:
    if entrada2 == 'inseto':
        if entrada3 == 'hematofago':
            print('pulga')
        else:
            print('lagarta')
    else:
        if entrada3 == 'hematofago':
            print('sanguessuga')
        else:
            print('minhoca')