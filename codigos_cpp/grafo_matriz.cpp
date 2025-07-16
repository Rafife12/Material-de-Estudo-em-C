#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int grafo[4][4] = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
    };

    cout << "Matriz de Adjacência:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grafo[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
