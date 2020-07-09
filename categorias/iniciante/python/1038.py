# -*- coding: utf-8 -*-

a, b = map(int, input().split())
if (a==1):
    c1 = b*4.00
    print('Total: R$ {:0.2f}'.format(c1))
elif(a==2):
    c2 = b*4.50
    print('Total: R$ {:0.2f}'.format(c2))
elif(a==3):
    c3 = b*5.00
    print('Total: R$ {:0.2f}'.format(c3))
elif(a==4):
    c4 = b*2.00
    print('Total: R$ {:0.2f}'.format(c4))
else:
    c5 = b*1.50
    print('Total: R$ {:0.2f}'.format(c5))
