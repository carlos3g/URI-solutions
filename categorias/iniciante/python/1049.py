# -*- coding: utf-8 -*-

n1 = str(input())
n2 = str(input())
n3 = str(input())
a = {
    'vertebrado': {
        'ave': {
            'carnivoro':'aguia',
            'onivoro':'pomba'
        },
        'mamifero': {
            'onivoro':'homem',
            'herbivoro':'vaca'
        }
    },
    'invertebrado': {
        'inseto': {
            'hematofago': 'pulga',
            'herbivoro':'lagarta'
        },
        'anelideo': {
            'hematofago': 'sanguessuga',
            'onivoro': 'minhoca'
        }
    }
}

print(a[n1][n2][n3])
