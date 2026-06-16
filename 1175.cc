/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 16/06/2026
Objetivo    : Peograma que elia o veotr N.
Aprendizado : Uso do cc
Pergunta de segunda ordem: .
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;

int main() {
    int N[20];

    for(int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    for(int i = 0; i < 10; i++) {
        int aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    for(int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << "\n";
    }

    return 0;
}
