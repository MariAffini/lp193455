/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 16/06/2026
Objetivo    : Programa que leia valor N, com vetor
Aprendizado : Uso de cc
Pergunta de segunda ordem: .
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> x(n);
    int menor = 0;
    int posicao = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (i == 0) {
            menor = x[i];
            posicao = i;
        } else if (x[i] < menor) {
            menor = x[i];
            posicao = i;
        }
    }
    
    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << posicao << "\n";
    
    return 0;
}
