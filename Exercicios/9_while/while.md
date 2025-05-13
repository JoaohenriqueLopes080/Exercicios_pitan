# Estrutura de Repetição `while` em C

O comando `while` executa um bloco de código enquanto uma condição for verdadeira.

## Sintaxe

```c
while (condição) {
    // bloco de código
}
```

## Exemplo

```c
#include <stdio.h>

int main() {
    int contador = 1;
    while (contador <= 5) {
        printf("Contador: %d\n", contador);
        contador++;
    }
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

No exemplo acima, o laço `while` repete enquanto `contador` for menor ou igual a 5.