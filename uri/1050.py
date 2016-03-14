#!/usr/bin/env python3

def main():
    DDD = int(input())

    DDDDictionary = {}
    DDDDictionary[61] = 'Brasilia'
    DDDDictionary[71] = 'Salvador'
    DDDDictionary[11] = 'Sao Paulo'
    DDDDictionary[21] = 'Rio de Janeiro'
    DDDDictionary[32] = 'Juiz de Fora'
    DDDDictionary[19] = 'Campinas'
    DDDDictionary[27] = 'Vitoria'
    DDDDictionary[31] = 'Belo Horizonte'

    if DDD in DDDDictionary:
        print(DDDDictionary[DDD])
    else:
        print("DDD nao cadastrado")

if __name__ == '__main__':
    main()
