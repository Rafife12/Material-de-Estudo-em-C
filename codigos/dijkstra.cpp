#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

void dijkstra(vector<vector<pair<int, int>>>& grafo, int origem) {
    int n = grafo.size();
    vector<int> dist(n, INT_MAX);
    dist[origem] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> fila;
    fila.push({0, origem});

    while (!fila.empty()) {
        int u = fila.top().second;
        int d = fila.top().first;
        fila.pop();

        if (d > dist[u]) continue;

        for (auto [v, peso] : grafo[u]) {
            if (dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
                fila.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << "Distância até " << i << ": " << dist[i] << endl;
}
