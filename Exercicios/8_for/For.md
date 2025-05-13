# Estrutura de Repetição `for` em C

O comando `for` em C é utilizado para repetir um bloco de código um número determinado de vezes, geralmente controlando uma variável de contagem.

## Sintaxe Básica

```c
for (inicialização; condição; incremento) {
    // bloco de código
}
```

- **inicialização**: executada uma vez antes do início do loop, normalmente usada para declarar e inicializar a variável de controle.
- **condição**: verificada antes de cada iteração; enquanto for verdadeira, o bloco será executado.
- **incremento**: executado ao final de cada iteração, geralmente para atualizar a variável de controle.

## Exemplo 1: Contando de 1 a 5

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

**Saída:**
```
1
2
3
4
5
```

## Exemplo 2: Iterando sobre um array

```c
#include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", numeros[i]);
    }
    return 0;
}
```

**Saída:**
```
10
20
30
40
50
```

## Exemplo 3: Loop reverso

```c
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}
```

**Saída:**
```
5
4
3
2
1
```

## Dica

Você pode usar o `for` para percorrer arrays, executar repetições com diferentes incrementos ou decrementos, e até mesmo omitir partes da expressão, dependendo da lógica do seu programa.
