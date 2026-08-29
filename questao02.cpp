#include <iostream>
#include <vector>

int main() {

    int quantidade;

    std::cout << "Informe a quantidade de numeros: ";
    std::cin >> quantidade;

    if (quantidade <= 0) {
        std::cout << "Digite uma quantidade valida.";
        return 1;
    }

    std::vector<int> numeros(quantidade);

    // Entrada dos valores
    std::cout << "\nDigite os numeros:\n";

    for (int i = 0; i < quantidade; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    // Exibicao da lista original
    std::cout << "\n-- LISTA ORIGINAL --\n";

    for (int i = 0; i < quantidade; i++) {
        std::cout << numeros[i] << " ";
    }

    // Selection Sort
    for (int i = 0; i < quantidade - 1; i++) {

        int posicaoMenor = i;

        // Procura o menor valor no restante da lista
        for (int j = i + 1; j < quantidade; j++) {

            if (numeros[j] < numeros[posicaoMenor]) {
                posicaoMenor = j;
            }
        }

        // Realiza a troca
        if (posicaoMenor != i) {

            int auxiliar = numeros[i];
            numeros[i] = numeros[posicaoMenor];
            numeros[posicaoMenor] = auxiliar;
        }
    }

    // Exibicao da lista ordenada
    std::cout << "\n\n-- LISTA ORDENADA --\n";

    for (int i = 0; i < quantidade; i++) {
        std::cout << numeros[i] << " ";
    }

    return 0;
}
