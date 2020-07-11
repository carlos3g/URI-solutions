a = 'abcdefghijklmnopqrstuvwxyz'
n = int(input())
for x in range(0, n):
    frase = []
    frase += input().lower()
    casas = int(input())
    fraseNova = []
    for i in frase:
        fraseNova += a[a.index(i)-casas]
    print(''.join(fraseNova).upper())
