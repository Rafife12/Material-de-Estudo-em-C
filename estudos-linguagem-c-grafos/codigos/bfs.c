void bfs(int inicio) {
    bool visitadoLocal[MAX] = {false};
    int fila[MAX], frente = 0, tras = 0;
    int nivel[MAX] = {0};

    visitadoLocal[inicio] = true;
    fila[tras++] = inicio;

    printf("Ordem de visita da BFS:\n");
    while (frente < tras) {
        int v = fila[frente++];
        printf("%c - nível = %d\n", vertices[v], nivel[v]);
        for (int i = 0; i < MAX; i++) {
            if (grafo[v][i] && !visitadoLocal[i]) {
                visitadoLocal[i] = true;
                fila[tras++] = i;
                nivel[i] = nivel[v] + 1;
            }
        }
    }
}
