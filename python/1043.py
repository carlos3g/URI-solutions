# -*- coding: utf-8 -*-

n1, n2, n3 = map(float, input().split())

if (n1+n2>n3 and n2+n3>n1 and n1+n3>n2):
    print('Perimetro =', n1+n2+n3)
else:
    print('Area =', (n1+n2)/2*n3)
