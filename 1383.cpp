/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 11/06/2026
Objetivo    : Quantidade de instâncias.
Aprendizado : Uso da linguagem c++
Pergunta de segunda ordem: .
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool verificaInstancia(vector<vector<int>>& matriz) {
    for (int i = 0; i < 9; i++) {
        set<int> linha;
        set<int> coluna;
        for (int j = 0; j < 9; j++) {
            linha.insert(matriz[i][j]);
            coluna.insert(matriz[j][i]);
        }
        if (linha.size() != 9 || coluna.size() != 9) {
            return false;
        }
    }

  
    for (int bloco = 0; bloco < 9; bloco++) {
        set<int> subgrade;
        int linha_inicio = 3 * (bloco / 3);
        int coluna_inicio = 3 * (bloco % 3);
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                subgrade.insert(matriz[linha_inicio + i][coluna_inicio + j]);
            }
        }
        if (subgrade.size() != 9) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int instancia = 1; instancia <= n; instancia++) {
        vector<vector<int>> matriz(9, vector<int>(9));
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> matriz[i][j];
            }
        }

        cout << "Instancia " << instancia << "\n";
        if (verificaInstancia(matriz)) {
            cout << "SIM\n\n";
        } else {
            cout << "NAO\n\n";
        }
    }

    return 0;
}
