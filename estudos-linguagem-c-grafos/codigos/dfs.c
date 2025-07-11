void dfs(int v) {
    visitado[v] = true;
    printf("%c ", vertices[v]);
    for (int i = 0; i < MAX; i++) {
        if (grafo[v][i] && !visitado[i]) {
            dfs(i);
        }
    }
}
