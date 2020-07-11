# -*- coding: utf-8 -*-

TABLE = ''' !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~'''


def main():
    n = int(input())
    for x in range(n):
        string = first(input())
        string = second(string)
        string = third(string)
        print(string)


def str_to_list(string, reverse=False):
    if reverse:
        return ''.join(string)
    return list(string)


def first(string):
    string = str_to_list(string)
    for index, char in enumerate(string):
        if char.isalpha():
            string[index] = TABLE[TABLE.index(char)+3]
    return str_to_list(string, True)


def second(string):
    return string[::-1]


def third(string):
    meio = len(string)//2
    string = str_to_list(string)
    for index, char in enumerate(string[meio:]):
        string[index+meio] = TABLE[TABLE.index(char)-1]
    return str_to_list(string, True)


main()
