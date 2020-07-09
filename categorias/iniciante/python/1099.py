# -*- coding: utf-8 -*-

n = int(input())
soma = 0
for p in range(1, n+1):
    l = [int(x) for x in input().split()]
    l.sort()
    for c in range(l[0]+1, l[1]):
        if c%2!=0:
            soma += c
    print(soma)
    soma = 0
