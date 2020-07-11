tot = 151
n = int(input())
pomekon = []
for x in range(0, n):
    a = input()
    if a not in pomekon:
        tot -= 1
    pomekon.append(a)
print('Falta(m) {} pomekon(s).'.format(tot))
