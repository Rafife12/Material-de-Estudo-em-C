void dfs_conexo(int grafo[MAX][MAX], int n, int visitado[], int v) {
    visitado[v] = 1;
    for (int i = 0; i < n; i++) {
        if (grafo[v][i] && !visitado[i]) {
            dfs_conexo(grafo, n, visitado, i);
        }
    }
}

bool ehConexo(int grafo[MAX][MAX], int n) {
    int visitado[MAX] = {0};
    dfs_conexo(grafo, n, visitado, 0);
    for (int i = 0; i < n; i++) {
        if (!visitado[i]) return false;
    }
    return true;
}
