#include <iostream>
#include <vector>
#include <string>

struct Aluno {
    std::string nome;
    float nota;
};

int main(){

    int qtd_alunos;

    std::cout << "Digite quantos alunos serao cadastrados: ";
    std::cin >> qtd_alunos;
    std::cout << "\n";

    if (qtd_alunos < 8){
        std::cout << "Cadastre pelo menos 8 alunos.";
        return 1;
    }

    // Criacao do vetor de alunos
    std::vector<Aluno> lista(qtd_alunos);

    // Cadastro dos alunos
    for (int i = 0; i < qtd_alunos; i++){

        std::cout << "Digite o nome do " << i + 1 << " aluno: ";
        std::cin >> lista[i].nome;

        std::cout << "Digite a nota do aluno: ";
        std::cin >> lista[i].nota;

        std::cout << "\n";
    }

    // Insertion Sort
    for (int i = 1; i < qtd_alunos; i++){

        Aluno atual = lista[i];
        int j = i - 1;

        // Move os alunos com nota menor para a direita
        while (j >= 0 && lista[j].nota < atual.nota){

            lista[j + 1] = lista[j];
            j--;
        }

        // Coloca o aluno na posicao correta
        lista[j + 1] = atual;
    }

    // Exibicao do ranking
    std::cout << "\n-- RANKING DOS ALUNOS --\n";

    for (int i = 0; i < qtd_alunos; i++){

        std::cout << i + 1 << "º lugar - ";
        std::cout << lista[i].nome;
        std::cout << " | Nota: " << lista[i].nota << std::endl;
    }

    return 0;
}
