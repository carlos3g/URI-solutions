# -*- coding: utf-8 -*-

n = int(input())

c = n//100
x = n%100
ci = x//50
v = x%50//20
d = x%50%20//10
cin = x%50%20%10//5
do = x%50%20%10%5//2
um = x%50%20%10%5%2//1

print('''{}
{} nota(s) de R$ 100,00
{} nota(s) de R$ 50,00
{} nota(s) de R$ 20,00
{} nota(s) de R$ 10,00
{} nota(s) de R$ 5,00
{} nota(s) de R$ 2,00
{} nota(s) de R$ 1,00'''.format(n, c, ci, v, d, cin, do, um))
