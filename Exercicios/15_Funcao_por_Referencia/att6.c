#include <stdio.h>
#include <string.h>

// Função que remove caracteres repetidos de uma string
void removeRepetidos(char *str) {
    int i, j, k;
    int len = strlen(str);

    // Percorre cada caractere da string
    for (i = 0; i < len; i++) {
        // Compara o caractere atual com os próximos
        for (j = i + 1; j < len; ) {
            if (str[i] == str[j]) {
                // Se for repetido, remove deslocando os caracteres à esquerda
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--; // Reduz o tamanho da string
            } else {
                j++; // Só avança se não removeu
            }
        }
    }
}

int main() {
    char str[101];

    // Lê uma string do usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove o '\n' do final, se existir
    str[strcspn(str, "\n")] = '\0';

    // Chama a função para remover caracteres repetidos
    removeRepetidos(str);

    // Imprime a nova string sem caracteres repetidos
    printf("String sem caracteres repetidos: %s\n", str);

    return 0;
}