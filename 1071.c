/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 23/04/2026
Objetivo    : Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
Aprendizado : Compreendi a ultilização do for. 
-------------------------------------------------------------------------- */
#include <stdio.h>
int main(){
	
	int X,Y,i,aux,soma_impar=0;
	scanf("%d %d",&X,&Y);
	
	if(Y<X)
	{
		aux = X;
		X = Y+1;
		Y = aux;
	}
	for(i=X;i<Y;i++){
		if(i%2!=0){
			if(i<0){
				soma_impar-=i*(-1);
			}else{
				soma_impar+=i;
			}
		}
	}
	printf("%d\n",soma_impar);
	return 0;
}
