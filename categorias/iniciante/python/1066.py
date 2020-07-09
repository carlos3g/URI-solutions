# -*- coding: utf-8 -*-

i = pa = p = n = 0
for x in range(5):
    tmp = int(input())
    if tmp%2==0:
        pa += 1
    if tmp%2!=0:
        i += 1
    if tmp>0:
        p += 1
    if tmp<0:
        n += 1

print('''{} valor(es) par(es)
{} valor(es) impar(es)
{} valor(es) positivo(s)
{} valor(es) negativo(s)'''.format(pa, i, p, n))
