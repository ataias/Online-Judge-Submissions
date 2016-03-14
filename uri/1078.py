#!/usr/bin/env python3

def main():
    N = int(input())

    for i in range(1, 11):
        print("{:d} x {:d} = {:d}".format(i,N,i*N))

if __name__ == '__main__':
    main()
