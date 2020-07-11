# -*- coding: utf-8 -*-

def main(n):
    while (n != 0):
        lista = []
        maior = -1
        for _ in range(n):
            string = input()
            if len(string) > maior:
                maior = len(string)
            lista.append(string)
        n = int(input())
        for _ in lista:
            print('{:>{width}}'.format(_, width=maior))
        if (not (n == 0)):
            print()


main(int(input()))
