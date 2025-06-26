#include <stdio.h>
#include <string.h>

// Função que remove caracteres repetidos de uma string (sem ponteiros)
int remove_repetidos(char str[]) {
    int i, j, k;
    int removidos = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        // Verifica se o caractere já apareceu antes
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                // Caractere repetido encontrado, remove deslocando à esquerda
                for (k = i; k < len; k++) {
                    str[k] = str[k+1];
                }
                removidos++;
                len--;
                i--; // Volta para verificar o novo caractere na posição i
                break;
            }
        }
    }
    return removidos;
}

int main() {
    char str[101];

    printf("Digite uma string: ");
    fgets(str, 101, stdin);

    // Remove o '\n' do final, se existir
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }

    int qtd_removidos = remove_repetidos(str);

    printf("Quantidade de caracteres removidos: %d\n", qtd_removidos);
    printf("String resultante: %s\n", str);

    return 0;
}
