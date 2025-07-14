#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>>& grafo, int inicio) {
    int n = grafo.size();
    vector<bool> visitado(n, false);
    queue<int> fila;

    visitado[inicio] = true;
    fila.push(inicio);

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();
        cout << "Visitando: " << atual << endl;

        for (int vizinho : grafo[atual]) {
            if (!visitado[vizinho]) {
                visitado[vizinho] = true;
                fila.push(vizinho);
            }
        }
    }
}
