void lerGrafoManual() {
    printf("Digite a matriz de adjacência (%dx%d):\n", MAX, MAX);
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%d", &grafo[i][j]);
        }
    }
}
