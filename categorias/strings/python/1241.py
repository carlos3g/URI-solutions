# -*- coding: utf-8 -*-

n = int(input())
for _ in range(n):
    A, B = input().split()
    if A[len(A)-len(B):] == B:
        print('encaixa')
    else:
        print('nao encaixa')
