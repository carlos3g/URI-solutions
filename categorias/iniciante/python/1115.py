# -*- coding: utf-8 -*-

x = 1
y = 1
while x!= 0 or y!=0:
    x, y = map(int, input().split())
    if x!=0 or y!=0:
        if y>0 and x>0:
            print('primeiro')
        if y<0 and x>0:
            print('quarto')
        if y<0 and x<0:
            print('terceiro')
        if y>0 and x<0:
            print('segundo')
