x = int(input())
y = int(input())
NotMult = 0
if x<y:
    for c in range(x, y+1):
        if (c%13)!=0:
            NotMult += c
if x>y:
    for c in range(y, x+1):
        if (c%13)!=0:
            NotMult += c
print(NotMult)
