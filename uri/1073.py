#!/usr/bin/env python3

def main():
    N = int(input())
    for i in range(2,N+1,2):
        print(str(i) + "^2 = " + str(i*i))

if __name__ == '__main__':
    main()
