# -*- coding: utf-8 -*-

NUMBERS = '0123456789'
LOWER = 'abcdefghijklmnopqrstuvwxyz'
UPPER = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'


def main():
    while (True):
        try:
            validar(input())
        except EOFError:
            break


def validar(string):
    if string.isalnum() and 6 <= len(string) <= 32:
        if any(x in NUMBERS for x in string):
            if any(x in LOWER for x in string):
                if any(x in UPPER for x in string):
                    print('Senha valida.')
                    return
    print('Senha invalida.')


main()
