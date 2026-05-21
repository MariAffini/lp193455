/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 21/05/2026
Objetivo    : Calcular quantidade de LED.
Aprendizado : Não compreendi muito bem a ideia do switch. 
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int N;
    char numero[101];

    scanf("%d", &N);

    while(N--) {

        int soma = 0;

        scanf("%s", numero);

        for(int i = 0; numero[i] != '\0'; i++) {

            switch(numero[i]) {

                case '1':
                    soma += 2;
                    break;

                case '7':
                    soma += 3;
                    break;

                case '4':
                    soma += 4;
                    break;

                case '2':
                case '3':
                case '5':
                    soma += 5;
                    break;

                case '0':
                case '6':
                case '9':
                    soma += 6;
                    break;

                case '8':
                    soma += 7;
                    break;
            }
        }

        printf("%d leds\n", soma);
    }

    return 0;
}
