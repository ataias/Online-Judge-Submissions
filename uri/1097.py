#!/usr/bin/env python3

def main():
    for I in range(1,10,2):
        for J in range(6+I,3+I,-1):
            print("I={:d} J={:d}".format(I,J))

if __name__ == '__main__':
    main()
