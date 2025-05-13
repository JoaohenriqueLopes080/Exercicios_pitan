# Estrutura `if else` em C

A estrutura `if else` é usada para tomar decisões em programas C, permitindo executar diferentes blocos de código dependendo de condições.

## Sintaxe Básica

```c
if (condição) {
    // Código executado se a condição for verdadeira
} else {
    // Código executado se a condição for falsa
}
```

## Exemplo Simples

```c
#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else {
        printf("O número não é positivo.\n");
    }

    return 0;
}
```

## Explicação

- **if (numero > 0):** Verifica se a variável `numero` é maior que zero.
- **Bloco if:** Executa o `printf` se a condição for verdadeira.
- **else:** Executa o bloco alternativo se a condição for falsa.

## Estrutura `if else if else`

Permite testar múltiplas condições:

```c
if (condição1) {
    // Código se condição1 for verdadeira
} else if (condição2) {
    // Código se condição2 for verdadeira
} else {
    // Código se nenhuma condição for verdadeira
}
```

### Exemplo

```c
#include <stdio.h>

int main() {
    int nota = 75;

    if (nota >= 90) {
        printf("Aprovado com excelência!\n");
    } else if (nota >= 60) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}
```

## Observações

- Sempre use chaves `{}` para delimitar blocos, mesmo que haja apenas uma linha.
- As condições devem ser expressões que resultam em verdadeiro (`true`) ou falso (`false`).

## Dicas

- Use operadores relacionais (`==`, `!=`, `>`, `<`, `>=`, `<=`) para comparar valores.
- Combine condições com operadores lógicos (`&&`, `||`, `!`).
