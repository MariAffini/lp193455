/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 23/04/2026
Objetivo    : Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 
Aprendizado : Compreendi a ulilização do scanf. 
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    return (a + b + abs(a - b))/2;
}

int main(){
    int a, b, c, resposta;
    
    scanf ("%d %d %d", &a, &b, &c);
    
    resposta = maior(a, maior(b, c));
     
    printf("%d eh o maior\n", resposta);
    
    return 0;
}
