# -*- coding: utf-8 -*-

t = int(input())

m = t%3600//60
h = t//3600
s = t%3600%60

print('{}:{}:{}'.format(h, m, s))
