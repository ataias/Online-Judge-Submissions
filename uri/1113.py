#!/usr/bin/env python3

def main():
    X, Y = 0, 1
    while X != Y:
        X, Y = [int(x) for x in input().split()]
        if X == Y:
            break;
        if X > Y:
            print("Decrescente")
        else:
            print("Crescente")

if __name__ == '__main__':
    main()
