# -*- coding: utf-8 -*-

salario = float(input())
imposto = 0

# 28%
if salario>4500.00:
    imposto += ((salario-4500.00)*28)/100
# 18%
if salario>3000.00 and salario>4500.00:
    imposto += ((4500.00-3000.00)*18)/100
else:
    if salario>3000.00:
        imposto += ((salario-3000.00)*18)/100
# 8%
if salario>2000.00 and salario>3000.00:
    imposto += ((3000.00-2000.00)*8)/100
else:
    if salario>2000.00:
        imposto += ((salario-2000.00)*8)/100

if imposto==0.00:
    print('Isento')
else:
    print('R$ {:.2f}'.format(imposto))
