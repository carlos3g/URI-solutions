# -*- coding: utf-8 -*-

A, B, C = map(float, input().split())
delta = B**2-4*A*C

if A>0:
    R1 = (-B+(delta**(0.5)))/(2*A)
    R2 = (-B-(delta**(0.5)))/(2*A)
if delta<0 or A==0 or A==0.0:
    print('Impossivel calcular')
else:
    print('''R1 = {:.5f}
R2 = {:.5f}'''.format(R1, R2))
