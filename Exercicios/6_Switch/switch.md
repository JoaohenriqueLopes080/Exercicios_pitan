# Estrutura `switch` em C

A estrutura `switch` é utilizada para selecionar entre múltiplas opções de execução, baseada no valor de uma expressão. É uma alternativa mais organizada ao uso de vários comandos `if-else` quando se deseja comparar o valor de uma variável com diferentes constantes.

## Sintaxe

```c
switch (expressao) {
    case constante1:
        // bloco de código
        break;
    case constante2:
        // bloco de código
        break;
    // ...
    default:
        // bloco de código padrão
}
```

- **expressao**: Deve ser do tipo inteiro, caractere ou enumerado.
- **case**: Cada caso compara o valor da expressão com uma constante.
- **break**: Encerra o bloco do `case`. Se omitido, a execução continua no próximo `case` (efeito chamado "fall through").
- **default**: Opcional. Executado se nenhum `case` for satisfeito.

## Exemplo Prático

```c
#include <stdio.h>

int main() {
    int dia = 3;

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia inválido\n");
    }

    return 0;
}
```

### Explicação

- A variável `dia` recebe o valor `3`.
- O `switch` compara `dia` com cada `case`.
- Como `dia` é igual a `3`, imprime "Terça-feira".
- O `break` impede que os próximos casos sejam executados.
- Se `dia` não corresponder a nenhum caso, o bloco `default` será executado.

## Observações

- O uso do `break` é importante para evitar a execução de múltiplos casos.
- O `default` é opcional, mas recomendado para tratar valores inesperados.
