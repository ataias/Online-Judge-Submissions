#!/usr/bin/env python3


def main():
    coordinates = input()
    x, y = [float(s) for s in coordinates.split()]
    if x > 0.0:
        if y > 0.0:
            print("Q1")
            return;
        elif y != 0:
            print("Q4")
            return;
    elif x != 0:
        if y > 0.0:
            print("Q2")
            return;
        elif y != 0:
            print("Q3")
            return;
    if x == 0 and y != 0:
        print("Eixo Y")
    elif y == 0 and x != 0:
        print("Eixo X")
    else:
        print("Origem")

if __name__ == '__main__':
    main()
