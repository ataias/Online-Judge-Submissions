#!/usr/bin/env python3

def main():
    N = int(input())
    In = 0
    Out = 0
    for i in range(0, N):
        X = int(input())
        if X >= 10 and X <= 20:
            In += 1
        else:
            Out += 1
    print("{:d} in".format(In))
    print("{:d} out".format(Out))

if __name__ == '__main__':
    main()
