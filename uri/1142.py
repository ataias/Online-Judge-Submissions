#!/usr/bin/env python3

def main():
    N = int(input())
    index = 1
    for i in range(0,N):
        for j in range(index, index+3):
            print("{:d} ".format(j), end="")
        print("PUM")
        index += 4


if __name__ == '__main__':
    main()
