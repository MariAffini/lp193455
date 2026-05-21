/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 21/05/2026
Objetivo    : Calcular o gasto de combustível.
Aprendizado : Aprendi a relacionar contas básicas, para resolver um problema.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int tempo, velocidade, distancia;
    double litros;

    scanf("%d\n%d", &tempo, &velocidade);

    distancia = velocidade * tempo;
    litros = distancia/12.0;

    printf("%.3lf\n", litros);

    return 0;
}
