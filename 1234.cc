/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 28/04/2026
Objetivo    : Transformar sentença de entrada em sentença dançante.
Aprendizado : COmpreeendi a ultilização do while
-------------------------------------------------------------------------- */
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int r, S;
    char sent[51];

    while(fgets(sent, sizeof(sent), stdin) != NULL){
        sent[strcspn(sent, "\n")] = '\0';
        
        S = 1;
        r = strlen(sent);

        for(int i = 0; i < r; ++i){
            if(!isalpha(sent[i]))  continue;

            if(S)   sent[i] = toupper(sent[i]);
            else    sent[i] = tolower(sent[i]);
            S = 1 - S;
        }

        printf("%s\n", sent);
    }

    return 0;
}
