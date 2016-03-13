#!/usr/bin/env python3

def main():
    numbers = input()
    start, end = [int(s) for s in numbers.split()]

    duration = end - start
    duration = duration if duration > 0 else duration + 24

    print("O JOGO DUROU {:d} HORA(S)".format(duration))

if __name__ == '__main__':
    main()
