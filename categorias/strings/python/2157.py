n = int(input())
for x in range(n):
    lista = []
    i, f = map(int, input().split())
    s = ''
    for y in range(i, f+1):
        s += str(y)
    print('{}{}'.format(s, s[::-1]))
