# -*- coding: utf-8 -*-

def main():
    D, N = validar()
    while (not (D == '0' and N == '0')):
        N = N.split(D)
        N = ''.join(N)
        if N == '':
            N = 0
        print(int(N))
        D, N = validar()


def validar():
    D= input().split()
    if len(D) == 1:
        D.append(input())
    return D[0], D[1]


main()    
