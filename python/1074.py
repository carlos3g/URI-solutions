# -*- coding: utf-8 -*-

n = int(input())
for _ in range(1, n+1):
    v = int(input())
    if v%2==0 and v>0:
        print('EVEN POSITIVE')
    elif v%2==0 and v<0:
        print('EVEN NEGATIVE')
    elif v%2!=0 and v>0:
        print('ODD POSITIVE')
    elif v%2!=0 and v<0:
        print('ODD NEGATIVE')
    elif v==0:
        print('NULL')
