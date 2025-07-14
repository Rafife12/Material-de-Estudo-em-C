#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool eh_bipartido(vector<vector<int>>& grafo) {
    int n = grafo.size();
    vector<int> cor(n, -1);

    for (int inicio = 0; inicio < n; inicio++) {
        if (cor[inicio] == -1) {
            queue<int> fila;
            fila.push(inicio);
            cor[inicio] = 0;

            while (!fila.empty()) {
                int u = fila.front(); fila.pop();

                for (int v : grafo[u]) {
                    if (cor[v] == -1) {
                        cor[v] = 1 - cor[u];
                        fila.push(v);
                    } else if (cor[v] == cor[u]) {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}
