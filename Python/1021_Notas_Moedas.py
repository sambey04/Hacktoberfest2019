def imp_notas(quantidade, valor):
    return '{:.0f} nota(s) de R$ {:.2f}'.format(quantidade, valor)

def imp_moedas(quantidade, valor):
    return '{:.0f} moeda(s) de R$ {:.2f}'.format(quantidade, valor)

numero = float(input())
numero += 0.0001

if numero >= 0 or numero <= 1000000.00:

    notas = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00]
    moedas = [1.00, 0.50, 0.25, 0.10, 0.05, 0.01]

    dcp_notas = []
    dcp_moedas = []

    for nota in notas:
        dcp_notas.append( (numero // nota) )
        numero = numero - ( ( numero // nota ) * nota )

    for moeda in moedas:
        dcp_moedas.append( (numero // moeda) )
        numero = numero - ( ( numero // moeda ) * moeda )

    print('NOTAS:')
    for i in range(6):
        print(imp_notas(dcp_notas[i], notas[i]))

    print('MOEDAS:')
    for i in range(6):
        print(imp_moedas(dcp_moedas[i], moedas[i]))
