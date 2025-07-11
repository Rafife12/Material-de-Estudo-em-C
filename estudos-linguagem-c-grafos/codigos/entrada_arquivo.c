void lerGrafoArquivo() {
    char nomeArquivo[100];
    printf("Digite o nome do arquivo (ex: grafo.txt): ");
    scanf("%s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            fscanf(arquivo, "%d", &grafo[i][j]);
        }
    }
    fclose(arquivo);
    printf("Grafo carregado com sucesso!\n");
}
