#!/usr/bin/env python3

def main():

    I, J = 0.0, 1.0
    #is there a more elegant way to do this?
    while I <= 2.0:
        for i in range(1,4):
            if abs(round(I) - I) > 1e-6:
                if abs(round(i+I) - i - I) > 1e-6:
                    print("I={:.1f} J={:.1f}".format(I,i+I))
                else:
                    print("I={:.1f} J={:.0f}".format(I,i+I))
            else:
                if abs(round(i+I) - i - I) > 1e-6:
                    print("I={:.0f} J={:.1f}".format(I,i+I))
                else:
                    print("I={:.0f} J={:.0f}".format(I,i+I))
        I += 0.2

if __name__ == '__main__':
    main()
