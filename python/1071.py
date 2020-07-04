# -*- coding: utf-8 -*-

a = int(input())
b = int(input())
l = [a,b]
l.sort()
x = l[0]
y = l[1]
s = 0
for n in range(x+1, y):
    if n%2!=0:
        s += n
print(s)
