# -*- coding: utf-8 -*-

i = 1
n = 7
for x in range(1, 6):
    print('I=%r J=%r'%(i, n))
    n -= 1
    print('I=%r J=%r'%(i, n))
    n -= 1
    print('I=%r J=%r'%(i, n))
    n += 4
    i += 2
