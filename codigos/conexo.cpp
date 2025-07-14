#include <iostream>
#include <vector>

using namespace std;

void dfs_conexo(vector<vector<int>>& grafo, vector<bool>& visitado, int v) {
    visitado[v] = true;
    for (int vizinho : grafo[v])
        if (!visitado[vizinho])
            dfs_conexo(grafo, visitado, vizinho);
}

bool eh_conexo(vector<vector<int>>& grafo) {
    int n = grafo.size();
    vector<bool> visitado(n, false);
    dfs_conexo(grafo, visitado, 0);
    for (bool v : visitado)
        if (!v) return false;
    return true;
}
