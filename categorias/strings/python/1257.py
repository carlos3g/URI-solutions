# -*- coding: utf-8 -*-

import string

alf = string.ascii_uppercase

n = int(input())
for _ in range(n):
    Tot = 0
    n1 = int(input())
    for x in range(n1):
        inp = input()
        for i, e in enumerate(inp):
            Tot += alf.index(e) + x + i
    print(Tot)
