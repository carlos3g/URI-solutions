# -*- coding: utf-8 -*-

n1, n2 = map(int, input().split())

if n1 < n2:
    h = n2 - n1
else:
    h = (24 - n1) + n2

print('O JOGO DUROU {} HORA(S)'.format(h))
