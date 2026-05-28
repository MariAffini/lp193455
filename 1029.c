/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 28/05/2026
Objetivo    : Identificar numero de chamadas resusivas. 
Aprendizado : Compreendi a ultilização de chamadas. 
Pergunta de segunda ordem: Não entendi muio a ideia do fibonacci. 
-------------------------------------------------------------------------- */
#include <stdio.h>

int chamadas = 0;

int fibonacci(int n) {
    chamadas++;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int casos;
    scanf("%d", &casos);

    for(int i = 0; i < casos; i++) {
        int n;

        scanf("%d", &n);

        chamadas = 0;

        int resultado = fibonacci(n);

        // tira a primeira chamada da contagem
        printf("fib(%d) = %d calls = %d\n", n, chamadas - 1, resultado);
    }

    return 0;
}
