# Estrutura `do-while` em Programação

A estrutura `do-while` é uma variação do laço de repetição que garante que o bloco de código será executado pelo menos uma vez, pois a condição é verificada **após** a execução do bloco.

## Sintaxe Geral

```c
do {
    // bloco de código
} while (condição);
```

## Funcionamento

1. O bloco dentro do `do` é executado.
2. A condição é avaliada.
3. Se a condição for verdadeira, o bloco é executado novamente.
4. O ciclo se repete até a condição ser falsa.

## Exemplo em C

```c
#include <stdio.h>

int main() {
    int contador = 1;
    do {
        printf("Contador: %d\n", contador);
        contador++;
    } while (contador <= 5);
    return 0;
}
```

**Saída:**
```
Contador: 1
Contador: 2
Contador: 3
Contador: 4
Contador: 5
```

> O bloco é executado pelo menos uma vez, mesmo que a condição seja falsa na primeira verificação.
