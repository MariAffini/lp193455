/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 21/05/2026
Objetivo    : Preenchimento de vetor IV
Aprendizado : Não entendi muito bem o uso do typedef
-------------------------------------------------------------------------- */
#include <stdio.h>

#define TAM 5

typedef struct {
    int v[TAM];
    int pos;
} Vetor;

int main() {
    Vetor par = {{0}, 0};
    Vetor impar = {{0}, 0};

    int x;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            par.v[par.pos++] = x;

            if (par.pos == TAM) {
                for (int j = 0; j < TAM; j++)
                    printf("par[%d] = %d\n", j, par.v[j]);
                par.pos = 0;
            }
        } else {
            impar.v[impar.pos++] = x;

            if (impar.pos == TAM) {
                for (int j = 0; j < TAM; j++)
                    printf("impar[%d] = %d\n", j, impar.v[j]);
                impar.pos = 0;
            }
        }
    }

    for (int j = 0; j < impar.pos; j++)
        printf("impar[%d] = %d\n", j, impar.v[j]);

    for (int j = 0; j < par.pos; j++)
        printf("par[%d] = %d\n", j, par.v[j]);

    return 0;
}
