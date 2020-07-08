x = int(input())
y = int(input())
l = [x, y]
l.sort()
for c in range(l[0]+1, l[1]):
    if c%5==2 or c%5==3:
        print(c)
