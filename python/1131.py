_qtd = _vinter = _vgremio = _empates = 0
while True:
    _qtd += 1
    gols = input()
    if int(gols[0]) > int(gols[2]):
        _vinter += 1
    elif int(gols[0]) == int(gols[2]):
        _empates += 1
    else:
        _vgremio += 1
    while True:
        print('Novo grenal (1-sim 2-nao)')
        opcao = int(input())
        if opcao == 1:
            break
        elif opcao == 2:
            break
    if opcao == 2:
        break
print(_qtd, 'grenais')
print('Inter:',_vinter)
print('Gremio:',_vgremio)
print('Empates:',_empates)
if _vinter == _vgremio:
    print('Nao houve vencedor')
elif _vinter > _vgremio:
    print('Inter venceu mais')
else:
    print('Gremio venceu mais')
