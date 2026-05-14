/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Calcular a distância entre dois pontos.
Aprendizado : Compreendi a ultilização das funções no código.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

double calcularDistancia(double x1, double y1,
                         double x2, double y2) {

    double distancia;

    distancia = sqrt((x2 - x1)*(x2 - x1) +
                     (y2 - y1)*(y2 - y1));

    return distancia;
}

int main() {

    double x1, y1, x2, y2;
    double resultado;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    resultado = calcularDistancia(x1, y1, x2, y2);

    printf("%.4lf\n", resultado);

    return 0;
}
