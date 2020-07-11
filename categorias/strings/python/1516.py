# -*- coding: utf-8 -*-

while True:
    lista = []
    n, m = [int(x) for x in input().split()]
    if n == 0 and m == 0:
        break
    for x in range(n):
        lista.append(input())
    lista_n = []
    a, b = [int(x) for x in input().split()]
    for y in lista:
        tmp = ''
        for x in y:
            tmp += x * (b//m)
        for x in range(a//n):
            lista_n.append(tmp)
    for x in lista_n:
        print(x)
    print()
