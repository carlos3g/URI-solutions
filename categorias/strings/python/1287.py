# -*- coding: utf-8 -*-

def convert(s):
    x = s
    x = x.replace(' ','')
    x = x.replace(',','')
    x = x.replace('l','1')
    x = x.replace('o','0')
    x = x.replace('O','0')

    try:
        x = int(x)
    except:
        return 'error'
    if x>2147483647:
        return 'error'
    return x
    
    
while True:
    try:
        x = convert(input())
        print(x)
    except EOFError:
        break
