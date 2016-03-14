#!/usr/bin/env python3

def main():
    N = int(input())
    for i in range(0, N):
        X, Y = [int(x) for x in input().split()]
        if Y == 0:
            print("divisao impossivel")
            continue
        else:
            print("{:.1f}".format(X/Y))

if __name__ == '__main__':
    main()
