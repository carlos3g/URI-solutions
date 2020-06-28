# -*- coding: utf-8 -*-

p1 = input().split()
p2 = input().split()

cp1, qtd1, vu1 = p1
cp2, qtd2, vu2 = p2
c = (int(qtd1)*float(vu1))+(int(qtd2)*float(vu2))

print('VALOR A PAGAR: R$ {:.2f}'.format(c))
