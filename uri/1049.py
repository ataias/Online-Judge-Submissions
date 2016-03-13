#!/usr/bin/env python3

def main():
    class1 = input()
    class2 = input()
    class3 = input()

    classification = {}
    classification['vertebrado'] = {'ave': {'carnivoro': 'aguia', 'onivoro': 'pomba'},
                                    'mamifero' : {'onivoro': 'homem', 'herbivoro': 'vaca'}}
    classification['invertebrado'] = {'inseto': {'hematofago': 'pulga', 'herbivoro': 'lagarta'},
                                        'anelideo': {'hematofago': 'sanguessuga', 'onivoro': 'minhoca'}}

    print(classification[class1][class2][class3])

if __name__ == '__main__':
    main()
