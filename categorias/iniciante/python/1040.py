# -*- coding: utf-8 -*-

n = input()
n0 = n.split()
n1, n2, n3, n4 = n0
m = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10

print('Media: {:.1f}'.format(m))

if (m >= 7.0):
    print('Aluno aprovado.')
elif (m < 5.0):
    print('Aluno reprovado.')
elif (5.0 <= m <= 6.9):
    print('Aluno em exame.')
    print('Nota do exame: {:.1f}'.format(e))
    e = float(input())
    mf = (e+m)/2
    if (mf >= 5.0):
        print('Aluno aprovado.')
    elif (mf <= 4.9):
        print('Aluno reprovado.')
    print('Media final: {:.1f}'.format(mf))
