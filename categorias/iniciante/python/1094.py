# -*- coding: utf-8 -*-

n = int(input())
dic = {
    "C": 0,
    "R": 0,
    "S": 0,
    "Tot": 0}

for x in range(n):
    qtd, cobaia = input().split()
    dic[cobaia]+= int(qtd)
    dic['Tot']+= int(qtd)

pC = dic['C']*100/dic['Tot']
pR = dic['R']*100/dic['Tot']
pS = dic['S']*100/dic['Tot']

print('''Total: {} cobaias
Total de coelhos: {}
Total de ratos: {}
Total de sapos: {}
Percentual de coelhos: {:.2f} %
Percentual de ratos: {:.2f} %
Percentual de sapos: {:.2f} %'''.format(
    dic['Tot'], dic['C'], dic['R'], dic['S'],
    pC, pR, pS
))
