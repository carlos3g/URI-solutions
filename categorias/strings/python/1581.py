# -*- coding: utf-8 -*-

n = int(input())
for x in range(n):
    qtd_pessoas = int(input())
    lista = []
    for y in range(qtd_pessoas):
        lista.append(input())
    if all(e == lista[0] for e in lista):
        print(lista[0])
    else:
        print('ingles')
