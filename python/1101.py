# -*- coding: utf-8 -*-

n = 1
m = 1
soma = 0
while m >=1 or n >=1:
    a = [int(x) for x in input().split()]
    a.sort()
    m = a[0]
    n = a[1]
    if m <=0 or n<=0:
        break
    for x in range(m, n+1):
        print(x, end=' ')
        soma += x
    print('Sum=%r'%soma)
    soma = 0
