# -*- coding: utf-8 -*-

numeros = []
for x in range(100):
    numeros.append(int(input()))
print(max(numeros))
print(numeros.index(max(numeros))+1)
