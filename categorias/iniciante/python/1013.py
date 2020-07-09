# -*- coding: utf-8 -*-

a, b, c = map(int, input().split())
maior = (a+b+abs(a-b))/2
resultado = (maior+c+abs(maior-c))/2
print('{} eh o maior'.format(resultado))
