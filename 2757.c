/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/runs/code/48587271
Data        : 14/04/2026
Objetivo    : Entrada e saída de números inteiros.
Aprendizado : Compreedi a ultilização do int. 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {

 int N1, N2, N3;
 scanf("%i %i %i", &N1, &N2, &N3);

 printf("A = %i, B = %i, C = %i\n", N1, N2, N3);
 printf("A = %10i, B = %10i, C = %10i\n", N1, N2, N3);
 printf("A = %010i, B = %010i, C = %010i\n", N1, N2, N3);
 printf("A = %-10i, B = %-10i, C = %-10i\n", N1, N2, N3);

 return 0;

} 
