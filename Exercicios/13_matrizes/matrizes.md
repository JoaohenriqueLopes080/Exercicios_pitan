# Matrizes em C

Matrizes são arrays multidimensionais, geralmente usados para armazenar dados em linhas e colunas.

## Declaração de Matrizes

```c
tipo nome[linhas][colunas];
```

Exemplo:
```c
int matriz[3][4]; // 3 linhas e 4 colunas
```

## Inicialização

```c
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

## Acesso aos Elementos

```c
matriz[linha][coluna] = valor;
int x = matriz[1][2]; // Acessa o elemento da 2ª linha, 3ª coluna
```

## Leitura e Escrita com `for`

```c
#include <stdio.h>

int main() {
    int matriz[2][3];
    // Leitura
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    // Escrita
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

## Matrizes e Funções

Para passar uma matriz para uma função:

```c
void imprimeMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
```

## Dicas

- Matrizes em C são armazenadas em **linha principal** (row-major order).
- O índice começa em 0.
- Matrizes podem ter mais de duas dimensões: `int cubo[2][3][4];`

## Exemplo Completo

```c
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```