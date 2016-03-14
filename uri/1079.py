#!/usr/bin/env python3

def main():
    N = int(input())
    for i in range(0,N):
        A, B, C = [float(x) for x in input().split()]
        media = (2*A+3*B+5*C)/10.0
        print("{:.1f}".format(media))

if __name__ == '__main__':
    main()
