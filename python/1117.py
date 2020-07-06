le = 0
notas = 0
while le != 2:
    n = float(input())
    if 0 <= n <= 10:
        notas = notas+n
        le += 1
    else:
        print('nota invalida')
print('media = {:.2f}'.format((notas/2)))
