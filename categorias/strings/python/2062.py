# -*- coding: utf-8 -*-

def main():
    input()
    words = input().split()
    validar(words)


def validar(words):
    for i, _ in enumerate(words):
        if len(_) == 3 and _[:2] == 'OB':
            words[i] = 'OBI'
        elif len(_) == 3 and _[:2] == 'UR':
            words[i] = 'URI'
    print(' '.join(words))


main()
