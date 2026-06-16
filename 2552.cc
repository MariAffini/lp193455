/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sales de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 16/06/2026
Objetivo    : Determinar o tabuleiro do jogo com matriz.
Aprendizado : Uso de cc
Pergunta de segunda ordem: .
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<vector<int>> mat(n, vector<int>(m));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    cout << 9;
                } else {
                    int paes = 0;
                    // Verifica célula acima
                    if (i > 0 && mat[i-1][j] == 1) paes++;
                    // Verifica célula abaixo
                    if (i < n-1 && mat[i+1][j] == 1) paes++;
                    // Verifica célula à esquerda
                    if (j > 0 && mat[i][j-1] == 1) paes++;
                    // Verifica célula à direita
                    if (j < m-1 && mat[i][j+1] == 1) paes++;
                    
                    cout << paes;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
