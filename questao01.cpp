#include <iostream>
#include <cstdlib>

int main() {
    system("cls");

    int tam = 10;
    int lista[tam] = {9, 4, 7, 2, 6, 1, 8, 3, 5, 0};

    // Exibição da lista inicial
    std::cout << "-- LISTA INICIAL --" << std::endl;

    for (int i = 0; i < tam; i++) {
        std::cout << lista[i] << " ";
    }

    std::cout << "\n";

    // Selection Sort
    for (int i = 0; i < tam - 1; i++) {

        int menor = i;

        // Procura o menor elemento no restante da lista
        for (int j = i + 1; j < tam; j++) {

            if (lista[j] < lista[menor]) {
                menor = j;
            }
        }

        // Troca o menor elemento com o elemento atual
        int temp = lista[i];
        lista[i] = lista[menor];
        lista[menor] = temp;
    }

    // Exibição da lista ordenada
    std::cout << "\n-- LISTA ORDENADA --" << std::endl;

    for (int i = 0; i < tam; i++) {
        std::cout << lista[i] << " ";
    }

    return 0;
}
