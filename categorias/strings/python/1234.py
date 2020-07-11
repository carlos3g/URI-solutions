# -*- coding: utf-8 -*-

from string import ascii_lowercase, ascii_uppercase
ALF = ascii_lowercase+ascii_uppercase

def main():
    while (True):
        try:
            n = input()
            new = ''
            verds = True
            for x in n:
                if (x in ALF):
                    if (verds):
                        new += x.upper()
                    else:
                        new += x.lower()
                    verds = not verds
                else:
                    new += x
            print(new)
        except EOFError:
            break


main()
