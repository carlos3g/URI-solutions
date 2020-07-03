# -*- coding: utf-8 -*-

lista = []
p = soma = 0

for x in range(6):
    lista.append(int(input()))
for x in lista:
    if (x > 0):
        p += 1
        soma += x


m = soma/p
print(p, 'valores positivos')
print('{:0.1f}'.format(m))
