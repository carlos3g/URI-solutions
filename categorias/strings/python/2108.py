maior = ''
while True:
    a = input()
    if a == '0':
        print('\nThe biggest word: {}'.format(maior))
        break
    a = a.split()
    for y, x in enumerate(a):
        if len(x) >= len(maior):
            maior = x
        if y+1 == len(a):
            print(len(x))
        else:
            print(len(x), end='-')
