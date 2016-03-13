#!/usr/bin/env python3

def main():
    numbers = input()
    starth, startm, endh, endm = [int(s) for s in numbers.split()]

    hours = endh - starth
    minutes = endm - startm
    if hours == 0 and minutes == 0:
        hours = hours + 24
    else:
        if minutes < 0:
            minutes = minutes + 60
            hours = hours - 1
        if hours < 0:
            hours = hours + 24;

    print("O JOGO DUROU {:d} HORA(S) E {:d} MINUTO(S)".format(hours, minutes))

if __name__ == '__main__':
    main()
