# -*- coding: utf-8 -*-

A, B, C = map(float, input().split())
T = (A*C)/2
C1 = 3.14159*C**2
T1 = ((A+B)*C)/2
Q = B**2
R = A*B
print("TRIANGULO: {:.3f}\nCIRCULO: {:.3f}\nTRAPEZIO: {:.3f}\nQUADRADO: {:.3f}\nRETANGULO: {:.3f}".format(T, C1, T1, Q, R))
