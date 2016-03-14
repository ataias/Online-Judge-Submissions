#!/usr/bin/env python3


def main():
    positive_n = 0
    for i in range(0,6):
        if float(input()) > 0.0:
            positive_n += 1
    print("{:d} valores positivos".format(positive_n))

if __name__ == '__main__':
    main()
