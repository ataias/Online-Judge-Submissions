#!/usr/bin/env python3

def main():
    N = int(input())
    for i in range(0,N):
        int_value = int(input())
        if int_value != 0:
            print(("EVEN" if (int_value % 2 == 0) else "ODD") + " " + ("POSITIVE" if (int_value > 0) else "NEGATIVE"))
        else:
            print("NULL")

if __name__ == '__main__':
    main()
