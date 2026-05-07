/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criptografia
Aprendizado : Compreendi a ultilização de strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char texto[1000];
    
    while(n--){
        fgets(texto, 1000, stdin);
        int tamanho = strlen(texto);
        texto[tamanho-1] = '\0';
        tamanho--;
        
        for(int i=0; i < tamanho; i++){
            if((texto[i] >= 'A' && texto[i] <= 'Z')||
               (texto[i] >= 'a' && texto[i] <= 'z')){
                   
                   texto[i] = texto[i] + 3;
             }
        }
        
        for(int i = 0; i < tamanho / 2; i++){
            char aux = texto[i];
            texto[i] = texto[tamanho -1 -i];
            texto[tamanho -1 -i] = aux;
        }
        
        for(int i = tamanho /2; i < tamanho; i++){
            texto[i] = texto[i] -1;
        }
        
        printf ("%S\n", texto);
    }
    return 0;
}
