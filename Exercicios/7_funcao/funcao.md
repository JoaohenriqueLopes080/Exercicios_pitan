# Funções em C

Funções são blocos de código que executam tarefas específicas e podem ser reutilizadas ao longo do programa. Elas ajudam a organizar, modularizar e tornar o código mais legível.

## Estrutura de uma Função

```c
tipo_retorno nome_funcao(parâmetros) {
    // corpo da função
}
```

- **tipo_retorno**: tipo de dado que a função retorna (ex: `int`, `void`, `float`).
- **nome_funcao**: nome escolhido para a função.
- **parâmetros**: variáveis recebidas pela função (podem ser zero ou mais).

---

## Exemplo 1: Função sem Parâmetros e sem Retorno

```c
#include <stdio.h>

void saudacao() {
    printf("Olá, seja bem-vindo!\n");
}

int main() {
    saudacao(); // Chama a função
    return 0;
}
```
**Explicação:**  
- `void saudacao()` define uma função que não recebe parâmetros e não retorna valor.
- Dentro do `main`, a função é chamada apenas pelo nome seguido de `()`.

---

## Exemplo 2: Função com Parâmetros e com Retorno

```c
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(5, 3);
    printf("A soma é: %d\n", resultado);
    return 0;
}
```
**Explicação:**  
- `int soma(int a, int b)` define uma função que recebe dois inteiros e retorna um inteiro.
- No `main`, passamos os valores `5` e `3` como argumentos.
- O valor retornado é armazenado em `resultado` e impresso.

---

## Resumo

- Funções podem ou não receber parâmetros.
- Funções podem ou não retornar valores.
- Usar funções torna o código mais organizado e reutilizável.
