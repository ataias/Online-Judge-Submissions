#!/usr/bin/env python3


def main():
    month = {1: 'January',
             2: 'February',
             3: 'March',
             4: 'April',
             5: 'May',
             6: 'June',
             7: 'July',
             8: 'August',
             9: 'September',
             10: 'October',
             11: 'November',
             12: 'December'}

    month_number = int(input())
    print(month[month_number])

if __name__ == '__main__':
    main()
