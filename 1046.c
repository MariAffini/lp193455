/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 21/05/2026
Objetivo    : Tempo de jogo.
Aprendizado : Consegui ultilizar condições dentro do código. 
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
 
    int inicio, fim, horas;
    
    scanf("%d %d", &inicio, &fim);
    
    horas = fim - inicio;

    if (fim > inicio) {
        horas = fim - inicio;
    } else {
        horas = (24 - inicio) + fim;
    }     
    
    
    printf("O JOGO DUROU %d HORA(S)\n", horas);
    
    return 0;
    
}
