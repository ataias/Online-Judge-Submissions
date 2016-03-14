#!/usr/bin/env python3

def main():
    grenais = 0
    inter_vitorias = 0
    gremio_vitorias = 0
    empates = 0

    while True:
        inter_gols, gremio_gols = [int(x) for x in input().split()]

        grenais += 1
        if inter_gols > gremio_gols:
            inter_vitorias += 1
        elif gremio_gols > inter_gols:
            gremio_vitorias += 1
        else:
            empates += 1

        answer = 0
        while answer != 1 and answer != 2:
            print("Novo grenal (1-sim 2-nao)")
            answer = int(input())
        if answer == 1:
            continue
        else:
            break

    print("{:d} grenais".format(grenais))
    print("Inter:{:d}".format(inter_vitorias))
    print("Gremio:{:d}".format(gremio_vitorias))
    print("Empates:{:d}".format(empates))
    if inter_vitorias > gremio_vitorias:
        print("Inter venceu mais")
    elif gremio_vitorias > inter_vitorias:
        print("Gremio venceu mais")
    else:
        print("Nao houve vencedor")

if __name__ == '__main__':
    main()
