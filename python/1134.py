# -*- coding: utf-8 -*-

n = 0
a = 0
g = 0
d = 0
while n!=4:
    n = int(input())
    if n==1:
        a += 1
    if n==2:
        g += 1
    if n==3:
        d += 1
print('''MUITO OBRIGADO
Alcool: {}
Gasolina: {}
Diesel: {}'''.format(a, g, d))
