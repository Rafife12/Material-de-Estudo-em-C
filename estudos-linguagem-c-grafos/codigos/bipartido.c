bool ehBipartido(int grafo[MAX][MAX], int n) {
    int cor[MAX];
    for (int i = 0; i < n; i++) cor[i] = -1;
    cor[0] = 1;
    int fila[MAX], frente = 0, tras = 0;
    fila[tras++] = 0;
    while (frente < tras) {
        int u = fila[frente++];
        for (int v = 0; v < n; v++) {
            if (grafo[u][v] && cor[v] == -1) {
                cor[v] = 1 - cor[u];
                fila[tras++] = v;
            } else if (grafo[u][v] && cor[v] == cor[u]) {
                return false;
            }
        }
    }
    return true;
}
