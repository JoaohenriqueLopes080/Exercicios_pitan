#include <stdio.h>
#include <string.h>

// Definindo a struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    // Declarando uma variável do tipo struct Aluno
    struct Aluno aluno1;

    // Atribuindo valores aos campos da struct
    strcpy(aluno1.nome, "Maria");
    aluno1.idade = 20;
    aluno1.nota = 8.5;

    // Exibindo os valores
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}


