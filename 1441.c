/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 28/05/2026
Objetivo    : Identificar o maior numero na sequencia de granizo. 
Aprendizado : Compreendi a ultilização long long. 
Pergunta de segunda ordem: Não entendi muito a ideia do collatz
-------------------------------------------------------------------------- */
#include <stdio.h>

long long maior;

// função recursiva
void collatz(long long n) {

    if (n > maior)
        maior = n;

    if (n == 1)
        return;

    if (n % 2 == 0)
        collatz(n / 2);
    else
        collatz(3 * n + 1);
}

int main() {

    long long n;

    while (scanf("%lld", &n) && n != 0) {

        maior = n;

        collatz(n);

        printf("%lld\n", maior);
    }

    return 0;
}
