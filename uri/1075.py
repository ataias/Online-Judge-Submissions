#!/usr/bin/env python3

def main():
    N = int(input())

    if N <= 2:
        print()
        return;
    else:
        value = 2
        while value <= 10000:
            print(value)
            value += N

if __name__ == '__main__':
    main()
