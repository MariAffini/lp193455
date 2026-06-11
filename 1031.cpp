/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        :Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 11/06/2026
Objetivo    : Determinar números de regiôes. 
Aprendizado : Uso da linguagem c++
Pergunta de segunda ordem: .
-------------------------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

int remaining(int cities, int jump)
{
	int r = 0;
	
	for(int i = 1; i < cities; i++)
		r = (r + jump) % i;
	
	return r;
}

int main()
{
	int ncities;
	
	while((cin >> ncities) && ncities)
	{
		int safe, jump;
		
		for(int i = 1; ; i++)
		{
			safe = remaining(ncities, i);
			
			if(safe == 11)
			{
				jump = i;
				break;
			}
		}
		
		cout << jump << endl;
	}
}
