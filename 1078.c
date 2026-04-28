/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 28/04/2026
Objetivo    : Imprimir tabuada de N(2<N<1000)
Aprendizado : Compreensão da ultilização de num*i
-------------------------------------------------------------------------- */
#include <stdio.h>
int main(){
    int i,num,res;
    
    scanf("%d",&num);
    
    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",i,num,num*i);
    }
return 0;
}
