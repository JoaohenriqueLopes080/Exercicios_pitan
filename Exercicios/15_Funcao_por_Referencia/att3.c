#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função que inverte o número recebido e retorna o resultado
unsigned int inverte_numero(unsigned int num) {
    unsigned int invertido = 0;    // Variável para armazenar o número invertido

    while (num > 0) {              // Enquanto houver dígitos em num
        invertido = invertido * 10 + num % 10; // Adiciona o último dígito de num ao invertido
        num /= 10;                 // Remove o último dígito de num
    }
    return invertido;              // Retorna o número invertido
}

int main() {
    unsigned int numero;           // Declara uma variável para armazenar o número do usuário
    printf("Digite um número: ");  // Solicita ao usuário que digite um número
    scanf("%u", &numero);          // Lê o número digitado pelo usuário

    numero = inverte_numero(numero); // Chama a função e armazena o resultado em numero

    printf("Número invertido: %u\n", numero); // Exibe o número invertido
    return 0;                      // Indica que o programa terminou com sucesso
}
