# -*- coding: utf-8 -*-

l = [1, 2]
while l[0] != l[1]:
    l = [int(i) for i in input().split()]
    if l[0] > l[1]:
        print('Decrescente')
    elif l[1] > l[0]:
        print('Crescente')
