# -*- coding: utf-8 -*-

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

distancia = ((x2-x1)**2+(y2-y1)**2)**0.5

print('{:0.4f}'.format(distancia))
