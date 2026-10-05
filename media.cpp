#include <iostream>

using namespace std;

// Função para calcular a média
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {

    char nomes[5][50];
    float n1[5], n2[5], n3[5];
    float medias[5];
    
    int indiceMelhor = 0;
    float maiorMedia = 0;

    cout << "CADASTRO DE ALUNOS\n";

    // inpuut dados
    for (int i = 0; i < 5; i++) {
        cout << "\nAluno " << (i + 1) << "\n";
        cout << "Nome: ";
        cin >> nomes[i];

        cout << "Nota 1: ";
        cin >> n1[i];
        cout << "Nota 2: ";
        cin >> n2[i];
        cout << "Nota 3: ";
        cin >> n3[i];

        // Chamar a função
        medias[i] = calcularMedia(n1[i], n2[i], n3[i]);

        // Guarda a maior média
        if (i == 0 || medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            indiceMelhor = i;
        }
    }

    // tabela
    cout << "\n\n----------------- TABELA DE RESULTADOS -----------------\n";
    cout << "Nome\t\tNota 1\tNota 2\tNota 3\tMedia\tSituacao\n";
    cout << "--------------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << nomes[i] << "\t\t" 
             << n1[i] << "\t" 
             << n2[i] << "\t" 
             << n3[i] << "\t" 
             << medias[i] << "\t";


        if (medias[i] >= 7.0) {
            cout << "Aprovado\n";
        } else {
            cout << "Reprovado\n";
        }
    }
    cout << "--------------------------------------------------------\n";

    // Aluno com a maior média
    cout << "\nAluno com a maior media: " << nomes[indiceMelhor] 
         << " (Media: " << maiorMedia << ")\n";

    return 0;
}