#include <iostream>
#include <vector>

int main(){

    int quantidade;

    std::cout << "Digite quantos elementos terao na lista: ";
    std::cin >> quantidade;
    std::cout << "\n";

    if (quantidade <= 0){
        std::cout << "A quantidade de elementos deve ser maior que 0";
        return 1;
    }

    // Criacao do vetor
    std::vector<int> numeros(quantidade);

    for (int i = 0; i < quantidade; i++){
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numeros[i];
    }

    // Exibicao da lista inicial
    std::cout << "\n";
    std::cout << "Lista inicial:" << std::endl;

    for (int i = 0; i < quantidade; i++){
        std::cout << numeros[i] << " ";
    }

    // Selection Sort
    for (int i = 0; i < quantidade - 1; i++){

        int maior = i;

        // Procura o maior numero no restante do vetor
        for (int j = i + 1; j < quantidade; j++){

            if (numeros[j] > numeros[maior]){
                maior = j;
            }
        }

        // Troca o maior numero de posicao
        if (maior != i){

            int auxiliar = numeros[i];
            numeros[i] = numeros[maior];
            numeros[maior] = auxiliar;
        }
    }

    // Exibicao da lista ordenada
    std::cout << "\n\n";
    std::cout << "Lista ordenado:" << std::endl;

    for (int i = 0; i < quantidade; i++){
        std::cout << numeros[i] << " ";
    }

    return 0;
}
