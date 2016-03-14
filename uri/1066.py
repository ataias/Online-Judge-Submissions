#!/usr/bin/env python3

def main():
    even = 0
    odd = 0
    positive = 0
    negative = 0
    for i in range(0,5):
        value = int(input())
        if value % 2 == 0:
            even += 1
        else:
            odd += 1
        if value > 0:
            positive += 1
        if value < 0:
            negative += 1
    print("{:d} valor(es) par(es)".format(even))
    print("{:d} valor(es) impar(es)".format(odd))
    print("{:d} valor(es) positivo(s)".format(positive))
    print("{:d} valor(es) negativo(s)".format(negative))

if __name__ == '__main__':
    main()
