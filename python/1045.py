# -*- coding: utf-8 -*-

n = [float(i) for i in input().split()]
n.sort(reverse=True)
A = n[0]
B = n[1]
C = n[2]

if A>=B+C:
    print('NAO FORMA TRIANGULO')
else:
    if (A**2)==(B**2)+(C**2):
        print('TRIANGULO RETANGULO')
    if (A**2)>(B**2)+(C**2):
        print('TRIANGULO OBTUSANGULO')
    if (A**2)<(B**2)+(C**2):
        print('TRIANGULO ACUTANGULO')
    if A==B==C:
        print('TRIANGULO EQUILATERO')
    if A==B!=C or B==C!=A or A==C!=B:
        print('TRIANGULO ISOSCELES')
