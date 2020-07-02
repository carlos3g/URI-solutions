# -*- coding: utf-8 -*-

n = float(input())

if (0 < n <= 400):
    s = n*15/100+n
    p = 15
elif (400 < n <= 800):
    s = n*12/100+n
    p = 12
elif (800 < n <= 1200):
    s = n*10/100+n
    p = 10
elif (1200 < n <= 2000):
    s = n*7/100+n
    p = 7
else:
    s = n*4/100+n
    p = 4
r = n*p/100

print('''Novo salario: %0.2f
Reajuste ganho: %0.2f
Em percentual: %r'''%(s, r, p) + ' %')
