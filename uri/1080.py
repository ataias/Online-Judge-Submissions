#!/usr/bin/env python3

def main():
    max_value = 0
    position = 0
    for i in range(0,100):
        value = int(input())
        if value > max_value:
            max_value = value
            position = i + 1
    print(max_value)
    print(position)

if __name__ == '__main__':
    main()
