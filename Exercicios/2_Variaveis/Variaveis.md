# Variáveis em C

Variáveis são espaços na memória usados para armazenar dados que podem ser manipulados durante a execução do programa.

## Declaração de Variáveis

Para declarar uma variável em C, é necessário informar o tipo e o nome:

```c
int idade;
float altura;
char letra;
```

## Tipos de Variáveis

- `int`: números inteiros (ex: 10, -5)
- `float`: números reais (ex: 3.14, -0.5)
- `double`: números reais de maior precisão
- `char`: caracteres (ex: 'a', 'Z')

## Inicialização

Você pode atribuir um valor ao declarar:

```c
int idade = 25;
float altura = 1.75;
char letra = 'A';
```

## Regras para nomes de variáveis

- Devem começar com letra ou `_`
- Não podem conter espaços ou caracteres especiais
- Não podem ser palavras reservadas da linguagem

Exemplos válidos:
```c
int numero1;
float _media;
```

Exemplos inválidos:
```c
int 1numero;   // começa com número
float média;   // contém acento
```

## Uso de Variáveis

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int soma = a + b;
    printf("A soma é: %d\n", soma);
    return 0;
}
```

## Constantes

Para valores que não mudam, use `const`:

```c
const float PI = 3.14159;
```

## Dicas

- Sempre inicialize variáveis antes de usar.
- Use nomes descritivos para facilitar a leitura do código.
