#include <iostream>
#include <vector>

using namespace std;

bool eh_subgrafo(vector<vector<int>>& grafo, vector<vector<int>>& subgrafo) {
    for (int u = 0; u < subgrafo.size(); u++) {
        for (int v : subgrafo[u]) {
            if (find(grafo[u].begin(), grafo[u].end(), v) == grafo[u].end())
                return false;
        }
    }
    return true;
}
