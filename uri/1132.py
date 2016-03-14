#!/usr/bin/env python3

def main():
    l = []
    l.append(int(input()))
    l.append(int(input()))
    l.sort()

    sum = 0
    for i in range(l[0], l[1]+1):
        if i % 13 != 0:
            sum += i

    print(sum)

if __name__ == '__main__':
    main()
