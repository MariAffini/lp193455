/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 20/04/2026
Objetivo    : Ler 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : Ultilização do printf.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {

    int N;
    int maior = 0;
    int posicao = 0;

    for(int i = 1; i <= 100; i++) {
        scanf("%d", &N);

        if(i == 1 || N > maior) {
            maior = N;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
