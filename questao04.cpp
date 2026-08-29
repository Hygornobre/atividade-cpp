#include <iostream>
#include <vector>

int main(){

    int qtd_elementos;

    std::cout << "Digite quantos elementos terao na lista: ";
    std::cin >> qtd_elementos;
    std::cout << "\n";

    if (qtd_elementos <= 0){
        std::cout << "A quantidade de elementos deve ser maior que 0";
        return 1;
    }

    // Criacao do vetor
    std::vector<int> lista(qtd_elementos);

    for (int i = 0; i < qtd_elementos; i++){
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> lista[i];
    }

    // Exibicao da lista inicial
    std::cout << "\nLista inicial:" << std::endl;

    for (int i = 0; i < qtd_elementos; i++){
        std::cout << lista[i] << " ";
    }

    int trocas = 0;

    // Selection Sort
    for (int i = 0; i < qtd_elementos - 1; i++){

        int menor = i;

        // Busca do menor numero no restante do vetor
        for (int j = i + 1; j < qtd_elementos; j++){

            if (lista[j] < lista[menor]){
                menor = j;
            }
        }

        // Realiza a troca
        if (menor != i){

            int temp = lista[i];
            lista[i] = lista[menor];
            lista[menor] = temp;

            trocas++;

            // Exibe a lista depois de cada troca
            std::cout << "\nDepois da troca " << trocas << ":" << std::endl;

            for (int k = 0; k < qtd_elementos; k++){
                std::cout << lista[k] << " ";
            }
        }
    }

    // Exibicao da lista ordenada
    std::cout << "\n\nLista ordenado:" << std::endl;

    for (int i = 0; i < qtd_elementos; i++){
        std::cout << lista[i] << " ";
    }

    // Quantidade total de trocas
    std::cout << "\n\nTotal de trocas executadas: " << trocas;

    return 0;
}
