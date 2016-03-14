#!/usr/bin/env python3


def main():
    positive_n = 0
    positive_sum = 0.0
    for i in range(0,6):
        value = float(input())
        if value > 0.0:
            positive_n += 1
            positive_sum += value

    print("{:d} valores positivos".format(positive_n))
    print("{:.1f}".format(positive_sum/positive_n))

if __name__ == '__main__':
    main()
