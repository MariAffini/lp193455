/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Sals de Affini
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 16/062026
Objetivo    : Ordenar registros.
Aprendizado : Organização de dados com structs
Pergunta de segunda ordem: .
-------------------------------------------------------------------------- */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Camisa {
    string nome;
    string cor;
    char tamanho;
};

bool comparar(const Camisa &a, const Camisa &b) {
    if (a.cor != b.cor)
        return a.cor < b.cor;

    if (a.tamanho != b.tamanho)
        return a.tamanho > b.tamanho; // G > M > P

    return a.nome < b.nome;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    bool primeiroCaso = true;

    while (cin >> N && N) {
        cin.ignore();

        vector<Camisa> camisas(N);

        for (int i = 0; i < N; i++) {
            getline(cin, camisas[i].nome);

            cin >> camisas[i].cor >> camisas[i].tamanho;
            cin.ignore();
        }

        sort(camisas.begin(), camisas.end(), comparar);

        if (!primeiroCaso)
            cout << "\n";

        primeiroCaso = false;

        for (const auto &c : camisas) {
            cout << c.cor << " " << c.tamanho << " " << c.nome << "\n";
        }
    }

    return 0;
}
