# -*- coding: utf-8 -*-

d = {
    61: 'Brasilia',
    71: 'Salvador',
    11: 'Sao Paulo',
    21: 'Rio de Janeiro',
    32: 'Juiz de Fora',
    19: 'Campinas',
    27: 'Vitoria',
    31: 'Belo Horizonte'
    }

a = int(input())

if a in d:
    print(d[a])
else:
    print('DDD nao cadastrado') 