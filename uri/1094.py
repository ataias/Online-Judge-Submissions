#!/usr/bin/env python3

def main():
    cobaias = {'C': 0, 'R': 0, 'S': 0}
    N = int(input())
    for i in range(0,N):
        In = input().split()
        quantity = int(In[0])
        animal = In[1].capitalize() #just to make sure
        cobaias[animal] += quantity;

    total = cobaias['C']+cobaias['R']+cobaias['S']
    print("Total: {:d} cobaias".format(total))
    print("Total de coelhos: {:d}".format(cobaias['C']))
    print("Total de ratos: {:d}".format(cobaias['R']))
    print("Total de sapos: {:d}".format(cobaias['S']))

    pC = cobaias['C']*100.0/total
    pR = cobaias['R']*100.0/total
    pS = cobaias['S']*100.0/total

    print("Percentual de coelhos: {:.2f} %".format(pC))
    print("Percentual de ratos: {:.2f} %".format(pR))
    print("Percentual de sapos: {:.2f} %".format(pS))

if __name__ == '__main__':
    main()
