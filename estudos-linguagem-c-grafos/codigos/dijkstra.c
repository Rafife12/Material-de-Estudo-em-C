void dijkstra(int inicio) {
    int dist[MAX];
    bool visitadoLocal[MAX] = {false};
    for (int i = 0; i < MAX; i++) dist[i] = INF;
    dist[inicio] = 0;
    for (int c = 0; c < MAX - 1; c++) {
        int min = INF, u = -1;
        for (int i = 0; i < MAX; i++) {
            if (!visitadoLocal[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }
        if (u == -1) break;
        visitadoLocal[u] = true;
        for (int v = 0; v < MAX; v++) {
            if (!visitadoLocal[v] && grafo[u][v] && dist[u] + grafo[u][v] < dist[v]) {
                dist[v] = dist[u] + grafo[u][v];
            }
        }
    }
    printf("Menor distância do vértice %c para os outros vértices:\n", vertices[inicio]);
    for (int i = 0; i < MAX; i++) {
        if (dist[i] == INF)
            printf("%c -> %c = Infinito (sem caminho)\n", vertices[inicio], vertices[i]);
        else
            printf("%c -> %c = %d\n", vertices[inicio], vertices[i], dist[i]);
    }
}
