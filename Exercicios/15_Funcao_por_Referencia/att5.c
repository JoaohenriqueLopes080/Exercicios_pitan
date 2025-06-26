#include <stdio.h>
#include <string.h>

// Função que inverte a string passada por referência
void inverterString(char *str) {
    int inicio = 0; // Índice do início da string
    int fim = strlen(str) - 1; // Índice do final da string
    char temp; // Variável temporária para troca de caracteres

    // Enquanto o índice do início for menor que o do fim
    while (inicio < fim) {
        // Troca os caracteres das posições inicio e fim
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Move os índices para o centro da string
        inicio++;
        fim--;
    }
}

int main() {
    char str[100]; // Vetor para armazenar a string

    // Solicita ao usuário que digite uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string do teclado

    // Remove o caractere de nova linha, se houver
    str[strcspn(str, "\n")] = '\0';

    // Chama a função para inverter a string
    inverterString(str);

    // Imprime a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}