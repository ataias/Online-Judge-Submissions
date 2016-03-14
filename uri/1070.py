#!/usr/bin/env python3

def main():
    X = int(input())
    start = X if (X % 2 == 1) else (X + 1)
    for i in range(start, start+12, 2):
        print(i)

if __name__ == '__main__':
    main()
