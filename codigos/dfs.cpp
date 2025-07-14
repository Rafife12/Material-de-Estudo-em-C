#include <iostream>
#include <vector>

using namespace std;

void dfs_util(vector<vector<int>>& grafo, vector<bool>& visitado, int v) {
    visitado[v] = true;
    cout << "Visitando: " << v << endl;

    for (int vizinho : grafo[v]) {
        if (!visitado[vizinho]) {
            dfs_util(grafo, visitado, vizinho);
        }
    }
}

void dfs(vector<vector<int>>& grafo, int inicio) {
    int n = grafo.size();
    vector<bool> visitado(n, false);
    dfs_util(grafo, visitado, inicio);
}
