#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool eh_primo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Função que encontra o primo anterior e o próximo primo de n
void primos_vizinhos(int n, int *x, int *y) {
    // Encontrar o maior primo menor que n
    *x = n - 1;
    while (*x > 1 && !eh_primo(*x)) {
        (*x)--;
    }
    if (*x <= 1) *x = -1; // Caso não exista primo menor que n

    // Encontrar o menor primo maior que n
    *y = n + 1;
    while (!eh_primo(*y)) {
        (*y)++;
    }
}

int main() {
    int n, x, y;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    primos_vizinhos(n, &x, &y);

    if (x != -1)
        printf("Maior primo menor que %d: %d\n", n, x);
    else
        printf("Não existe primo menor que %d\n", n);

    printf("Menor primo maior que %d: %d\n", n, y);

    return 0;
}