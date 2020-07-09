# -*- coding: utf-8 -*-

N = int(input())
i = o = 0
for _ in range(1, N+1):
    tmp = int(input())
    if tmp in range(10, 21):
        i += 1
    else:
        o += 1
print(i,'in')
print(o,'out')
