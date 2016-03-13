#!/usr/bin/env python3


def main():
    grades = input()
    N = [float(s) for s in grades.split()]
    media = (2*N[0] + 3*N[1] + 4*N[2] + N[3])/10.0
    print("Media: {:.1f}".format(media))
    if media >= 7.0:
        print("Aluno aprovado.")
    elif media < 5.0:
        print("Aluno reprovado.")
    else:
        print("Aluno em exame.")
        N_Exame = float(input())
        print("Nota do exame: {:.1f}".format(N_Exame))

        media = (media + N_Exame)/2.0
        if media >= 5.0:
            print("Aluno aprovado.")
        else:
            print("Aluno reprovado.")
        print("Media final: {:.1f}".format(media))

if __name__ == '__main__':
    main()
