# -*- coding: utf-8 -*-

n1 = int(input())
for x in range(1, n1+1):
    l = [int(i) for i in input().split()]
    if l[1] == 0:
        print('divisao impossivel')
    else:
        d = l[0]/l[1]
        print(d)
