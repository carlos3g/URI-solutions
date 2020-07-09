while True:
    _soma = 0
    _total = 0
    while _total < 2:
        notas = float(input())
        if notas >= 0 and notas <=10:
            _soma += notas
            _total += 1
        else:
            print('nota invalida')
    print('media = {:.2f}'.format(_soma/2))
    while True:
        print('novo calculo (1-sim 2-nao)')
        opcao = int(input())
        if opcao == 1:
            break
        elif opcao == 2:
            break
    if opcao == 2:
        break
