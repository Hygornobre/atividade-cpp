#include <iostream>
#include <string>

using namespace std;

struct Produto {
    string nome;
    double preco;
};

int main() {
    int quantidade;

    // A quantidade deve ser no minimo 6
    do {
        cout << "Digite quantos produtos deseja cadastrar (minimo 6): ";
        cin >> quantidade;

        if (quantidade < 6) {
            cout << "Erro! Voce deve cadastrar pelo menos 6 produtos.\n\n";
        }

        if (quantidade > 100) {
            cout << "Erro! O maximo permitido e 100 produtos.\n\n";
        }

    } while (quantidade < 6 || quantidade > 100);

    cin.ignore();

    Produto produtos[100];

    // Cadastro dos produtos
    for (int i = 0; i < quantidade; i++) {

        cout << "\nDigite o nome do " << i + 1 << " produto: ";
        getline(cin, produtos[i].nome);

        cout << "Digite o preço do produto: R$ ";
        cin >> produtos[i].preco;
        cin.ignore();
    }

    // Selection Sort pelo preco
    for (int i = 0; i < quantidade - 1; i++) {

        int menor = i;

        for (int j = i + 1; j < quantidade; j++) {

            if (produtos[j].preco < produtos[menor].preco) {
                menor = j;
            }
        }

        Produto auxiliar = produtos[i];
        produtos[i] = produtos[menor];
        produtos[menor] = auxiliar;
    }

    // Exibicao dos produtos ordenados
    cout << "\n-- PRODUTOS ORDENADOS POR PREÇO --\n";

    for (int i = 0; i < quantidade; i++) {
        cout << "\nProduto: " << produtos[i].nome;
        cout << " | Preço: R$ " << produtos[i].preco;
    }

    return 0;
}
