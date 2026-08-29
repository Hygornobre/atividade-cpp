#include <iostream>

using namespace std;

int main() {
    int numeros[10] = {8, 3, 5, 1, 9, 2, 7, 4, 6, 10};

    // Exibe a lista antes da ordenacao
    cout << "-- LISTA ANTES DA ORDENACAO --\n";

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    // Insertion Sort
    for (int i = 1; i < 10; i++) {

        int atual = numeros[i];
        int j = i - 1;

        while (j >= 0 && numeros[j] > atual) {
            numeros[j + 1] = numeros[j];
            j--;
        }

        numeros[j + 1] = atual;
    }

    // Exibe a lista depois da ordenacao
    cout << "\n\n-- LISTA DEPOIS DA ORDENACAO --\n";

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
