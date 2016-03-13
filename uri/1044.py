#!/usr/bin/env python3

def main():
    numbers = input()
    x, y = [float(s) for s in numbers.split()]
    if x % y == 0 or y % x == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")

if __name__ == '__main__':
    main()
