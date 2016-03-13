#!/usr/bin/env python3

def mostrarAumento(v):
    r = 0.0 #taxa de aumento
    if v >= 0.0 and v <= 400.0:
        r = 0.15
    elif v >= 400.01 and v <= 800.00:
        r = 0.12
    elif v >= 800.01 and v <= 1200.0:
        r = 0.10
    elif v >= 1200.01 and v <= 2000.0:
        r = 0.07
    else:
        r = 0.04
    v_n = v*(1+r) #novo salario
    aumento = v_n - v
    print("Novo salario: {:.2f}".format(v_n))
    print("Reajuste ganho: {:.2f}".format(aumento))
    print("Em percentual: {:d} %".format(int(r*100)))

def main():
    salary = float(input())

    mostrarAumento(salary)

if __name__ == '__main__':
    main()
