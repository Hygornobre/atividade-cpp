#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& lista){

    int tamanho = lista.size();

    for (int i = 0; i < tamanho - 1; i++){

        int menor = i;

        // Busca o menor numero
        for (int j = i + 1; j < tamanho; j++){

            if (lista[j] < lista[menor]){
                menor = j;
            }
        }

        // Realiza a troca
        if (menor != i){

            int temp = lista[i];
            lista[i] = lista[menor];
            lista[menor] = temp;
        }
    }
}

void insertionSort(std::vector<int>& lista){

    int tamanho = lista.size();

    for (int i = 1; i < tamanho; i++){

        int atual = lista[i];
        int j = i - 1;

        // Move os numeros maiores para a direita
        while (j >= 0 && lista[j] > atual){

            lista[j + 1] = lista[j];
            j--;
        }

        // Coloca o numero na posicao correta
        lista[j + 1] = atual;
    }
}

void listar(std::vector<int>& lista){

    if (lista.empty()){
        std::cout << "A lista esta vazia.\n";
        return;
    }

    std::cout << "\n-- ELEMENTOS DA LISTA --\n";

    for (int i = 0; i < lista.size(); i++){
        std::cout << lista[i] << " ";
    }

    std::cout << "\n";
}

int main(){

    std::vector<int> lista;
    int opcao;

    do{

        std::cout << "\n===== MENU =====\n";
        std::cout << "1 - Inserir elementos\n";
        std::cout << "2 - Listar elementos\n";
        std::cout << "3 - Ordenar com Selection Sort\n";
        std::cout << "4 - Ordenar com Insertion Sort\n";
        std::cout << "5 - Limpar lista\n";
        std::cout << "0 - Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch(opcao){

            case 1: {

                int quantidade;
                std::cout << "\nQuantos elementos deseja inserir? ";
                std::cin >> quantidade;

                for (int i = 0; i < quantidade; i++){

                    int numero;

                    std::cout << "Digite o " << i + 1 << " numero: ";
                    std::cin >> numero;

                    lista.push_back(numero);
                }

                break;
            }

            case 2:

                listar(lista);
                break;

            case 3:

                if (lista.empty()){

                    std::cout << "\nA lista esta vazia. Insira elementos antes de ordenar.\n";

                } else {

                    selectionSort(lista);

                    std::cout << "\n-- LISTA APOS SELECTION SORT --\n";
                    listar(lista);
                }

                break;

            case 4:

                if (lista.empty()){

                    std::cout << "\nA lista esta vazia. Insira elementos antes de ordenar.\n";

                } else {

                    insertionSort(lista);

                    std::cout << "\n-- LISTA APOS INSERTION SORT --\n";
                    listar(lista);
                }

                break;

            case 5:

                lista.clear();

                std::cout << "\nLista reinicializada com sucesso.\n";

                break;

            case 0:

                std::cout << "\nPrograma encerrado.\n";
                break;

            default:

                std::cout << "\nOpcao invalida.\n";
        }

    } while(opcao != 0);

    return 0;
}
