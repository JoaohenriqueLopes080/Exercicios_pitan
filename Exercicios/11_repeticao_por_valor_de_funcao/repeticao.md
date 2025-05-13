# Repetição por Valor de Função em C

A repetição por valor de função ocorre quando um laço é executado até que uma função retorne um valor específico. Em C, isso é comum ao usar funções que verificam condições, como leitura de dados ou validação.

## Exemplo Prático

Vamos criar um programa que lê números do usuário até que ele digite um número positivo. Usaremos uma função para verificar se o número é positivo.

```c
#include <stdio.h>

// Função que verifica se o número é positivo
int eh_positivo(int n) {
    return n > 0;
}

int main() {
    int numero;

    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
    } while (!eh_positivo(numero)); // Repete enquanto a função retornar 0 (falso)

    printf("Você digitou o número positivo: %d\n", numero);
    return 0;
}
```

## Explicação

- **Função `eh_positivo`**: Retorna 1 se o número for positivo, 0 caso contrário.
- **Laço `do...while`**: Executa pelo menos uma vez e repete enquanto `eh_positivo(numero)` retornar 0.
- **Condição de parada**: O laço termina quando a função retorna 1 (verdadeiro).

## Variação com `while`

Também é possível usar um laço `while` simples:

```c
#include <stdio.h>

int eh_positivo(int n) {
    return n > 0;
}

int main() {
    int numero = 0;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    while (!eh_positivo(numero)) {
        printf("Tente novamente. Digite um número positivo: ");
        scanf("%d", &numero);
    }

    printf("Você digitou: %d\n", numero);
    return 0;
}
```

## Resumo

- Use funções para encapsular condições de parada.
- O laço repete até a função retornar o valor desejado.
- Torna o código mais modular e legível.
