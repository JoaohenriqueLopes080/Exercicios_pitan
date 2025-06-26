#include <stdio.h>

// Função auxiliar para verificar se um número é primo
int eh_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Função que encontra os primos vizinhos sem usar struct
void primos_vizinhos(int N, int *menor_primo, int *maior_primo) {
    int menor = N - 1;
    while (menor > 1) {
        if (eh_primo(menor)) {
            *menor_primo = menor;
            break;
        }
        menor--;
    }

    int maior = N + 1;
    while (1) {
        if (eh_primo(maior)) {
            *maior_primo = maior;
            break;
        }
        maior++;
    }
}

int main() {
    int N;
    int menor, maior;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    primos_vizinhos(N, &menor, &maior);

    printf("Maior primo menor que %d: %d\n", N, menor);
    printf("Menor primo maior que %d: %d\n", N, maior);

    return 0;
}
