qtd = int(input())
nu = {
    '0': 6,
    '1': 2,
    '2': 5,
    '3': 5,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 3,
    '8': 7,
    '9': 6
    }
for x in range(0, qtd):
    leds = 0
    n = []
    n += input()
    for i in n:
        leds += nu[i]
    print(leds, 'leds')
