# -*- coding: utf-8 -*-

n = int(input())

a = n//365
m = n%365//30
d = n%365%30//1

print('''{} ano(s)
{} mes(es)
{} dia(s)'''.format(a, m, d))
