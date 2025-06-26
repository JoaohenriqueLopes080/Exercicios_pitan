#include <stdio.h>
#include <string.h>

// Função que duplica cada caractere da string original e armazena na string duplicada
void duplica_caracteres(char original[], char duplicada[]) {
    int i, j = 0;
    // Percorre cada caractere da string original
    for (i = 0; original[i] != '\0'; i++) {
        duplicada[j++] = original[i];   // Copia o caractere original
        duplicada[j++] = original[i];   // Copia novamente o mesmo caractere
    }
    duplicada[j] = '\0'; // Adiciona o caractere nulo ao final da string duplicada
}

int main() {
    char str[101];           // String original (até 100 caracteres)
    char duplicada[201];     // String duplicada (até 200 caracteres)

    // Solicita ao usuário que digite uma string
    printf("Digite uma string: ");
    fgets(str, 101, stdin); // Lê a string do teclado

    // Remove o '\n' do final, se existir
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Chama a função para duplicar os caracteres
    duplica_caracteres(str, duplicada);

    // Imprime a string duplicada
    printf("String duplicada: %s\n", duplicada);

    return 0;
}