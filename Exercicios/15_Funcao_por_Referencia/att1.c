#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função que calcula a quantidade de divisores de um número (por referência)
void conta_divisores(int *num) { // Define a função que recebe um ponteiro para inteiro
    int count = 0; // Inicializa o contador de divisores
    for (int i = 1; i <= *num; i++) { // Loop de 1 até o valor apontado por num
        if (*num % i == 0) { // Se num é divisível por i
            count++; // Incrementa o contador
        }
    }
    *num = count; // Atualiza o valor apontado por num com a quantidade de divisores
}

int main() { // Função principal do programa
    int N; // Declara a variável que armazenará a quantidade de números
    printf("Digite a quantidade de números: "); // Solicita ao usuário a quantidade de números
    scanf("%d", &N); // Lê a quantidade de números

    for (int i = 0; i < N; i++) { // Loop para processar cada número
        int valor; // Declara a variável para armazenar o valor atual
        printf("Digite o valor %d: ", i + 1); // Solicita ao usuário o valor atual
        scanf("%d", &valor); // Lê o valor digitado

        conta_divisores(&valor); // Chama a função para contar divisores, passando o endereço de valor

        printf("Quantidade de divisores: %d\n", valor); // Exibe a quantidade de divisores
    }

    return 0; // Indica que o programa terminou com sucesso
}