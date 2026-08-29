#include <iostream>

using namespace std;

int main() {
    int quantidade;

    cout << "Digite a quantidade de numeros: ";
    cin >> quantidade;

    int numeros[100];

    // Entrada dos numeros
    for (int i = 0; i < quantidade; i++) {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> numeros[i];
    }

    // Insertion Sort
    for (int i = 1; i < quantidade; i++) {

        int atual = numeros[i];
        int j = i - 1;

        while (j >= 0 && numeros[j] > atual) {
            numeros[j + 1] = numeros[j];
            j--;
        }

        numeros[j + 1] = atual;
    }

    // Exibe a lista ordenada
    cout << "\n-- LISTA ORDENADA --\n";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
