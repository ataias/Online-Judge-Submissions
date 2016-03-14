#!/usr/bin/env python3

def main():
    A = 0
    G = 0
    D = 0

    answer = 0
    while answer != 4:
        answer = int(input())
        if answer == 4:
            break
        if answer == 1:
            A += 1
            continue
        if answer == 2:
            G += 1
            continue
        if answer == 3:
            D += 1
            continue
    print("MUITO OBRIGADO")
    print("Alcool: {:d}".format(A))
    print("Gasolina: {:d}".format(G))
    print("Diesel: {:d}".format(D))

if __name__ == '__main__':
    main()
