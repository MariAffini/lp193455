/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 28/05/2026
Objetivo    : Tamanho máximo de figurinhas na pilha.
Aprendizado : Compreendi a ultilização de limites de números.
Pergunta de segunda ordem: Não entendi muito a ideia do mdc no começo. 
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;

    return mdc(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int f1, f2;

        scanf("%d %d", &f1, &f2);

        printf("%d\n", mdc(f1, f2));
    }

    return 0;
}
