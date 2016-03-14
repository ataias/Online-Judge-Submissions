#!/usr/bin/env python3

def main():
    while True:
        x1, x2 = -1.0, -1.0
        while x1 == -1.0:
            x = float(input())
            if x < 0.0 or x > 10.0:
                print("nota invalida")
            else:
                x1 = x

        while x2 == -1.0:
            x = float(input())
            if x < 0.0 or x > 10.0:
                print("nota invalida")
            else:
                x2 = x
        print("media = {:.2f}".format(x1/2+x2/2))

        answer = 0
        while answer != 1 and answer != 2:
            print("novo calculo (1-sim 2-nao)")
            answer = int(input())
        if answer == 1:
            continue
        else:
            break

if __name__ == '__main__':
    main()
