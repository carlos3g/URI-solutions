# -*- coding: utf-8 -*-

I = -0.2
J = [0.8, 1.8, 2.8]
for x in range(1, 12):
    I += 0.2
    J[0] += 0.2
    J[1] += 0.2
    J[2] += 0.2
    if I==0.0 or I==1.0 or x==11:
        print('I=%.0f J=%.0f'%(I, J[0]))
        print('I=%.0f J=%.0f'%(I, J[1]))
        print('I=%.0f J=%.0f'%(I, J[2]))
    elif I != 0.0 or I != 1.0 or I != 2.0:
        print('I=%.1f J=%.1f'%(I, J[0]))
        print('I=%.1f J=%.1f'%(I, J[1]))
        print('I=%.1f J=%.1f'%(I, J[2]))
