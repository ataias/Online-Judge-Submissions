#!/usr/bin/env python3

def main():
    X = int(input())
    Z = 0
    while Z <= X:
        Z = int(input())
    result = X
    iterations = 0
    while result <= Z:
        X = X + 1
        result += X
        iterations += 1
    print(iterations)

if __name__ == "__main__":
    main()
