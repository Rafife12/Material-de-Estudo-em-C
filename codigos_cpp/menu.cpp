#include <iostream>
using namespace std;

void opcao1() {
    cout << "Executando opção 1" << endl;
}

void opcao2() {
    cout << "Executando opção 2" << endl;
}

int main() {
    int opcao;

    do {
        cout << "\nMenu de Opções:" << endl;
        cout << "1. Opção 1" << endl;
        cout << "2. Opção 2" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                opcao1();
                break;
            case 2:
                opcao2();
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 0);

    return 0;
}
