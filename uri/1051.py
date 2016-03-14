#!/usr/bin/env python3

def calcular_imposto(salario):
    if salario <= 2000.0:
        return "Isento"

    imposto = 0
    if salario >= 2000.01:
        if salario - 2000.0 >= 1000.0:
            imposto = imposto + 999.99*0.08
        else:
            imposto = imposto + (salario - 2000.0)*0.08
    if salario >= 3000.01:
        if salario - 3000.0 >= 1500.00:
            imposto = imposto + 1499.99*0.18
        else:
            imposto = imposto + (salario - 3000.0)*0.18
    if salario > 4500.0:
        imposto = imposto + (salario - 4500.0)*0.28
    return "R$ {:.2f}".format(imposto)


def main():
    salario = float(input())
    print(calcular_imposto(salario))

if __name__ == '__main__':
    main()
