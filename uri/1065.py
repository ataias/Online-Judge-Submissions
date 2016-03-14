#!/usr/bin/env python3


def main():
    even_n = 0
    for i in range(0,5):
        value = int(input())
        if value % 2 == 0:
            even_n += 1

    print("{:d} valores pares".format(even_n))

if __name__ == '__main__':
    main()
