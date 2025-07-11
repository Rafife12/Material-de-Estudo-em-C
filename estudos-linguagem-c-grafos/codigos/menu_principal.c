int main() {
    setlocale(LC_ALL, "");
    int opcao;
    do {
        printf("\n------------------ MENU PRINCIPAL ------------------\n");
        printf("1 - Busca em Profundidade (DFS)\n");
        printf("2 - Busca em Largura (BFS)\n");
        printf("3 - Dijkstra (Menor Caminho)\n");
        printf("0 - Sair\n");
        printf("-----------------------------------------------------\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        if (opcao == 0) {
            printf("Encerrando o programa...\n");
            break;
        }
        escolherEntrada();
        switch (opcao) {
            case 1:
                resetVisitado();
                printf("Visita DFS a partir do vértice A:\n");
                dfs(0);
                printf("\n");
                break;
            case 2:
                bfs(0);
                break;
            case 3:
                dijkstra(0);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);
    return 0;
}
