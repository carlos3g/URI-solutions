# -*- coding: utf-8 -*-

senha = 2002
s = 0
while s != senha:
    s = int(input())
    if s == senha:
        print('Acesso Permitido')
    elif s != senha:
        print('Senha Invalida')
