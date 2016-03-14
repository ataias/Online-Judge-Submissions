#!/usr/bin/env python3

def main():
    l = []
    l.append(int(input()))
    l.append(int(input()))
    l.sort()

    for i in range(l[0]+1,l[1]):
        if i % 5 == 2 or i % 5 == 3:
            print(i)

if __name__ == '__main__':
    main()
