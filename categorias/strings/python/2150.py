while True:
    try:
        soma = 0
        a = input()
        if a == '':
            break
        f = input()
        for x in a:
            soma += f.count(x)
        print(soma)
    except:
        break
