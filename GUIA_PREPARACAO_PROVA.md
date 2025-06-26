# 📖 Guia Completo de Preparação para Prova - Programação em C

> **Disciplina:** Programação - Professora Pitan  
> **Aluno:** João Henrique Lopes  
> **Data:** Junho de 2025  

---

## 📋 Índice

1. [Introdução à Programação em C](#1-introdução-à-programação-em-c)
2. [Variáveis e Tipos de Dados](#2-variáveis-e-tipos-de-dados)
3. [Expressões e Operadores](#3-expressões-e-operadores)
4. [Conversão de Tipos](#4-conversão-de-tipos)
5. [Teste de Mesa](#5-teste-de-mesa)
6. [Estruturas Condicionais (if-else)](#6-estruturas-condicionais-if-else)
7. [Estrutura Switch](#7-estrutura-switch)
8. [Funções](#8-funções)
9. [Estruturas de Repetição](#9-estruturas-de-repetição)
10. [Vetores (Arrays)](#10-vetores-arrays)
11. [Matrizes](#11-matrizes)
12. [Strings](#12-strings)
13. [Função por Referência](#13-função-por-referência)
14. [Noção de Ponteiros](#14-noção-de-ponteiros)
15. [Structs (Estruturas)](#15-structs-estruturas)
16. [Dicas Importantes para a Prova](#16-dicas-importantes-para-a-prova)

---

## 1. Introdução à Programação em C

### 🎯 Conceitos Essenciais

**Estrutura básica de um programa C:**
```c
#include <stdio.h>

int main() {
    // código do programa
    return 0;
}
```

### 🔧 Função `printf`
- Usada para exibir informações na tela
- Especificadores de formato:
  - `%d` - inteiros
  - `%f` - números reais
  - `%c` - caracteres
  - `%s` - strings

**Exemplo:**
```c
#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    printf("Meu nome é %s e tenho %d anos\n", "João", 20);
    return 0;
}
```

### 🔧 Função `scanf`
- Usada para ler dados do teclado
```c
int idade;
scanf("%d", &idade);  // Note o & antes da variável
```

---

## 2. Variáveis e Tipos de Dados

### 📊 Tipos Fundamentais

| Tipo | Descrição | Especificador | Exemplo |
|------|-----------|---------------|---------|
| `int` | Números inteiros | `%d` | `int idade = 25;` |
| `float` | Números reais | `%f` | `float altura = 1.75;` |
| `double` | Números reais (dupla precisão) | `%lf` | `double pi = 3.141592;` |
| `char` | Caracteres | `%c` | `char letra = 'A';` |

### 🎯 Declaração e Inicialização
```c
// Declaração simples
int numero;
float preco;

// Declaração com inicialização
int idade = 20;
float salario = 2500.50;

// Múltiplas variáveis do mesmo tipo
int a, b, c;
```

### 🎯 Constantes
```c
// Usando #define
#define PI 3.14159

// Usando const
const float DOLAR = 4.98;
```

### ⚠️ Regras para Nomes de Variáveis
- ✅ Começar com letra ou `_`
- ❌ Não podem começar com número
- ❌ Não podem conter espaços
- ❌ Não podem ser palavras reservadas

**Exemplos:**
```c
// ✅ Válidos
int numero1;
float _media;
char nome_completo;

// ❌ Inválidos
int 1numero;    // começa com número
float média;    // contém acento
int if;         // palavra reservada
```

---

## 3. Expressões e Operadores

### 🧮 Operadores Aritméticos
| Operador | Operação | Exemplo |
|----------|----------|---------|
| `+` | Adição | `a + b` |
| `-` | Subtração | `a - b` |
| `*` | Multiplicação | `a * b` |
| `/` | Divisão | `a / b` |
| `%` | Módulo (resto) | `a % b` |

### 🔍 Operadores Relacionais
| Operador | Significado | Exemplo |
|----------|-------------|---------|
| `==` | Igual | `a == b` |
| `!=` | Diferente | `a != b` |
| `<` | Menor que | `a < b` |
| `>` | Maior que | `a > b` |
| `<=` | Menor ou igual | `a <= b` |
| `>=` | Maior ou igual | `a >= b` |

### 🧠 Operadores Lógicos
| Operador | Significado | Exemplo |
|----------|-------------|---------|
| `&&` | E lógico | `(a > 0) && (b > 0)` |
| `\|\|` | OU lógico | `(a > 0) \|\| (b > 0)` |
| `!` | NÃO lógico | `!(a > 0)` |

### 📝 Precedência de Operadores
1. `()` - Parênteses
2. `!`, `++`, `--` - Operadores unários
3. `*`, `/`, `%` - Multiplicação, divisão, módulo
4. `+`, `-` - Adição, subtração
5. `<`, `<=`, `>`, `>=` - Relacionais
6. `==`, `!=` - Igualdade
7. `&&` - E lógico
8. `||` - OU lógico

**Exemplo:**
```c
int resultado = 2 + 3 * 4;    // resultado = 14
int resultado2 = (2 + 3) * 4; // resultado2 = 20
```

---

## 4. Conversão de Tipos

### 🔄 Conversão Implícita
O compilador converte automaticamente quando necessário:
```c
int a = 5;
float b = 2.5;
float resultado = a + b; // a é convertido para float automaticamente
```

### 🔄 Conversão Explícita (Type Casting)
```c
int a = 7, b = 2;
float resultado = (float)a / b; // resultado = 3.5

char letra = 'A';
int codigo = (int)letra; // codigo = 65 (ASCII de 'A')
```

### ⚠️ Cuidados
- **Perda de dados:** `float` para `int` descarta decimais
- **Overflow:** Valores grandes em tipos pequenos

**Exemplos:**
```c
float x = 9.7;
int y = (int)x;     // y = 9 (perde .7)

int celsius = 25;
float fahrenheit = (celsius * 9.0/5.0) + 32; // Conversão de temperatura
```

---

## 5. Teste de Mesa

### 📋 Como Fazer Teste de Mesa
1. **Identifique as variáveis** do programa
2. **Crie uma tabela** com colunas para cada variável
3. **Execute linha por linha** anotando os valores
4. **Anote as saídas** (printf)

**Exemplo:**
```c
int x = 5, y = 10;
x = x + y;
y = x - y;
x = x - y;
printf("x = %d, y = %d", x, y);
```

| Linha | x | y | Saída |
|-------|---|---|-------|
| `int x = 5, y = 10;` | 5 | 10 | - |
| `x = x + y;` | 15 | 10 | - |
| `y = x - y;` | 15 | 5 | - |
| `x = x - y;` | 10 | 5 | - |
| `printf(...)` | 10 | 5 | "x = 10, y = 5" |

---

## 6. Estruturas Condicionais (if-else)

### 🎯 Sintaxe Básica
```c
if (condição) {
    // código se verdadeiro
} else {
    // código se falso
}
```

### 🎯 If-else if
```c
if (nota >= 9) {
    printf("Excelente");
} else if (nota >= 7) {
    printf("Bom");
} else if (nota >= 5) {
    printf("Regular");
} else {
    printf("Insuficiente");
}
```

### 💡 Exemplos Práticos
```c
// Verificar se número é par ou ímpar
if (numero % 2 == 0) {
    printf("Par");
} else {
    printf("Ímpar");
}

// Verificar maior de três números
if (a >= b && a >= c) {
    printf("Maior: %d", a);
} else if (b >= c) {
    printf("Maior: %d", b);
} else {
    printf("Maior: %d", c);
}
```

---

## 7. Estrutura Switch

### 🎯 Sintaxe
```c
switch (variavel) {
    case valor1:
        // código
        break;
    case valor2:
        // código
        break;
    default:
        // código padrão
}
```

### ⚠️ Pontos Importantes
- Use `break` para evitar "fall-through"
- `default` é opcional
- Funciona com `int`, `char`, mas não com `float` ou `string`

### 💡 Exemplo: Calculadora
```c
char operacao;
int a = 10, b = 5;

scanf(" %c", &operacao);

switch (operacao) {
    case '+':
        printf("Resultado: %d", a + b);
        break;
    case '-':
        printf("Resultado: %d", a - b);
        break;
    case '*':
        printf("Resultado: %d", a * b);
        break;
    case '/':
        if (b != 0) {
            printf("Resultado: %d", a / b);
        } else {
            printf("Divisão por zero!");
        }
        break;
    default:
        printf("Operação inválida");
}
```

### 💡 Exemplo: Classificação de Produtos
```c
int codigo;
scanf("%d", &codigo);

switch (codigo) {
    case 1:
        printf("Alimento não perecível");
        break;
    case 2: case 3: case 4:
        printf("Alimento perecível");
        break;
    case 5: case 6:
        printf("Higiene pessoal");
        break;
    default:
        printf("Código inválido");
}
```

---

## 8. Funções

### 🎯 Estrutura de uma Função
```c
tipo_retorno nome_funcao(parâmetros) {
    // corpo da função
    return valor; // se não for void
}
```

### 🎯 Tipos de Funções

#### 1. Sem parâmetros e sem retorno
```c
void saudacao() {
    printf("Olá, seja bem-vindo!\n");
}
```

#### 2. Com parâmetros e com retorno
```c
int soma(int a, int b) {
    return a + b;
}
```

#### 3. Função que calcula área
```c
float calcular_area_retangulo(float base, float altura) {
    return base * altura;
}
```

### 💡 Exemplo Completo: Calculadora com Funções
```c
#include <stdio.h>

// Declaração das funções
float calcular_quadrado(float lado);
float calcular_retangulo(float base, float altura);
float calcular_triangulo(float base, float altura);

int main() {
    char opcao;
    float resultado;
    
    printf("Escolha: q-quadrado, r-retângulo, t-triângulo: ");
    scanf(" %c", &opcao);
    
    switch (opcao) {
        case 'q': {
            float lado;
            printf("Digite o lado: ");
            scanf("%f", &lado);
            resultado = calcular_quadrado(lado);
            printf("Área do quadrado: %.2f\n", resultado);
            break;
        }
        case 'r': {
            float base, altura;
            printf("Digite base e altura: ");
            scanf("%f %f", &base, &altura);
            resultado = calcular_retangulo(base, altura);
            printf("Área do retângulo: %.2f\n", resultado);
            break;
        }
        case 't': {
            float base, altura;
            printf("Digite base e altura: ");
            scanf("%f %f", &base, &altura);
            resultado = calcular_triangulo(base, altura);
            printf("Área do triângulo: %.2f\n", resultado);
            break;
        }
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}

float calcular_quadrado(float lado) {
    return lado * lado;
}

float calcular_retangulo(float base, float altura) {
    return base * altura;
}

float calcular_triangulo(float base, float altura) {
    return (base * altura) / 2;
}
```

---

## 9. Estruturas de Repetição

### 🔄 Loop `for`

#### Sintaxe:
```c
for (inicialização; condição; incremento) {
    // código
}
```

#### Exemplos:
```c
// Contar de 1 a 10
for (int i = 1; i <= 10; i++) {
    printf("%d ", i);
}

// Tabuada
int numero = 5;
for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
}

// Percorrer array
int numeros[] = {10, 20, 30, 40, 50};
int tamanho = 5;
for (int i = 0; i < tamanho; i++) {
    printf("%d ", numeros[i]);
}
```

### 🔄 Loop `while`

#### Sintaxe:
```c
while (condição) {
    // código
}
```

#### Exemplo:
```c
int contador = 1;
while (contador <= 5) {
    printf("Contador: %d\n", contador);
    contador++;
}

// Validação de entrada
int numero;
printf("Digite um número positivo: ");
scanf("%d", &numero);
while (numero <= 0) {
    printf("Número inválido! Digite novamente: ");
    scanf("%d", &numero);
}
```

### 🔄 Loop `do-while`

#### Sintaxe:
```c
do {
    // código
} while (condição);
```

#### Características:
- Executa **pelo menos uma vez**
- Condição verificada **após** a execução

#### Exemplo:
```c
int opcao;
do {
    printf("Menu:\n1-Opção 1\n2-Opção 2\n0-Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Opção 1 selecionada\n");
            break;
        case 2:
            printf("Opção 2 selecionada\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
} while (opcao != 0);
```

---

## 10. Vetores (Arrays)

### 🎯 Declaração e Inicialização
```c
// Declaração
int vetor[10];           // vetor de 10 inteiros
float notas[5];          // vetor de 5 floats

// Declaração com inicialização
int numeros[] = {1, 2, 3, 4, 5};
int valores[5] = {10, 20, 30, 40, 50};

// Usando #define para tamanho
#define TAM 10
int vetor[TAM];
```

### 🎯 Acesso aos Elementos
```c
vetor[0] = 10;          // primeiro elemento
vetor[4] = 50;          // quinto elemento
int x = vetor[2];       // lê o terceiro elemento
```

### 💡 Exemplos Práticos

#### Leitura e escrita:
```c
#include <stdio.h>
#define TAM 5

int main() {
    int vetor[TAM];
    
    // Leitura
    printf("Digite %d números:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Escrita
    printf("Números digitados: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
```

#### Encontrar maior e menor:
```c
int maior = vetor[0], menor = vetor[0];
for (int i = 1; i < TAM; i++) {
    if (vetor[i] > maior) {
        maior = vetor[i];
    }
    if (vetor[i] < menor) {
        menor = vetor[i];
    }
}
printf("Maior: %d, Menor: %d\n", maior, menor);
```

#### Contar ocorrências:
```c
int numero, contador = 0;
printf("Digite o número para buscar: ");
scanf("%d", &numero);

for (int i = 0; i < TAM; i++) {
    if (vetor[i] == numero) {
        contador++;
    }
}
printf("O número %d aparece %d vezes\n", numero, contador);
```

#### Inverter vetor:
```c
for (int i = 0; i < TAM/2; i++) {
    int temp = vetor[i];
    vetor[i] = vetor[TAM-1-i];
    vetor[TAM-1-i] = temp;
}
```

---

## 11. Matrizes

### 🎯 Declaração e Inicialização
```c
// Declaração
int matriz[3][4];        // 3 linhas, 4 colunas

// Inicialização
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// Inicialização alternativa
int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
```

### 🎯 Acesso aos Elementos
```c
matriz[0][0] = 10;       // primeira linha, primeira coluna
matriz[1][2] = 25;       // segunda linha, terceira coluna
int x = matriz[i][j];    // elemento da linha i, coluna j
```

### 💡 Exemplos Práticos

#### Leitura e escrita:
```c
#include <stdio.h>

int main() {
    int matriz[3][3];
    
    // Leitura
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Escrita
    printf("Matriz digitada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
```

#### Soma dos elementos:
```c
int soma = 0;
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        soma += matriz[i][j];
    }
}
printf("Soma total: %d\n", soma);
```

#### Diagonal principal:
```c
printf("Diagonal principal: ");
for (int i = 0; i < 3; i++) {
    printf("%d ", matriz[i][i]);
}
printf("\n");
```

---

## 12. Strings

### 🎯 Declaração e Inicialização
```c
// Declaração
char nome[50];           // string de até 49 caracteres + '\0'
char palavra[] = "Hello"; // inicialização direta
char frase[20] = "Programação";
```

### 🎯 Leitura e Escrita
```c
// Leitura (sem espaços)
scanf("%s", nome);       // Note: sem &

// Leitura com espaços
fgets(nome, sizeof(nome), stdin);

// Escrita
printf("%s", nome);
printf("Nome: %s\n", nome);
```

### 📚 Funções Importantes de String
```c
#include <string.h>

// strlen - comprimento
int tamanho = strlen(nome);

// strcpy - copiar
strcpy(destino, origem);

// strcmp - comparar (retorna 0 se iguais)
if (strcmp(str1, str2) == 0) {
    printf("Strings iguais");
}

// strcat - concatenar
strcat(destino, origem);

// strchr - encontrar caractere
char *pos = strchr(nome, 'a');
```

### 💡 Exemplos Práticos

#### Contar caracteres específicos:
```c
char texto[100];
char caractere;
int contador = 0;

printf("Digite um texto: ");
fgets(texto, sizeof(texto), stdin);
printf("Digite o caractere para contar: ");
scanf(" %c", &caractere);

for (int i = 0; texto[i] != '\0'; i++) {
    if (texto[i] == caractere) {
        contador++;
    }
}
printf("O caractere '%c' aparece %d vezes\n", caractere, contador);
```

#### Inverter string:
```c
int tamanho = strlen(texto);
for (int i = 0; i < tamanho/2; i++) {
    char temp = texto[i];
    texto[i] = texto[tamanho-1-i];
    texto[tamanho-1-i] = temp;
}
```

---

## 13. Função por Referência

### 🎯 Conceito
- Passa o **endereço** da variável, não o valor
- Permite que a função **modifique** a variável original
- Usa o operador `&` na chamada e `*` na função

### 🎯 Sintaxe
```c
void funcao(int *parametro) {
    *parametro = novo_valor;  // modifica o original
}

// Chamada
int variavel = 10;
funcao(&variavel);  // passa o endereço
```

### 💡 Exemplos Práticos

#### Trocar valores:
```c
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Antes: x=%d, y=%d\n", x, y);
    trocar(&x, &y);
    printf("Depois: x=%d, y=%d\n", x, y);
    return 0;
}
```

#### Contar divisores:
```c
void conta_divisores(int *num) {
    int original = *num;
    int count = 0;
    
    for (int i = 1; i <= original; i++) {
        if (original % i == 0) {
            count++;
        }
    }
    *num = count;  // substitui o valor original pelo contador
}

int main() {
    int numero = 12;
    printf("Número: %d\n", numero);
    conta_divisores(&numero);
    printf("Quantidade de divisores: %d\n", numero);
    return 0;
}
```

#### Inverter string:
```c
void inverter_string(char *str) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho/2; i++) {
        char temp = str[i];
        str[i] = str[tamanho-1-i];
        str[tamanho-1-i] = temp;
    }
}
```

---

## 14. Noção de Ponteiros

### 🎯 Conceitos Fundamentais
- **Ponteiro:** variável que armazena o **endereço** de outra variável
- **&:** operador de endereço ("endereço de")
- **\*:** operador de desreferenciamento ("valor apontado por")

### 🎯 Declaração e Uso
```c
int x = 5;          // variável normal
int *px;            // ponteiro para inteiro
px = &x;            // px aponta para x
int y = *px;        // y recebe o valor apontado por px (5)
*px = 10;           // altera x através do ponteiro
```

### 💡 Exemplo Passo a Passo
```c
int main() {
    int x, y, *px, *py;
    
    x = 5;           // x recebe 5
    px = &x;         // px aponta para x
    py = px;         // py também aponta para x
    y = (*py)--;     // y recebe 5, depois x vira 4
    
    printf("%d %d", x, y); // imprime: 4 5
    return 0;
}
```

### 📋 Teste de Mesa com Ponteiros
```c
int v = 45, u;
int *pv, *pu;

pv = &v;          // pv aponta para v
*pv = v + 1;      // v vira 46
u = *pv + 1;      // u recebe 47
pu = &u;          // pu aponta para u
```

| Variável | Valor | Endereço |
|----------|-------|----------|
| v | 46 | 1004 |
| u | 47 | 1000 |
| pv | 1004 | - |
| pu | 1000 | - |
| *pv | 46 | - |
| *pu | 47 | - |

### ⚠️ Cuidados Importantes
1. **Inicializar ponteiros** antes de usar
2. **Não confundir** `*p` (valor) com `p` (endereço)
3. **Cuidado com ponteiros nulos**

---

## 15. Structs (Estruturas)

### 🎯 Conceito
- **Struct:** tipo de dado definido pelo usuário que agrupa diferentes tipos de dados relacionados
- Permite criar tipos de dados complexos combinando tipos básicos
- Útil para representar objetos do mundo real (pessoa, produto, ponto, etc.)

### 🎯 Declaração de Struct
```c
struct NomeStruct {
    tipo1 campo1;
    tipo2 campo2;
    tipo3 campo3;
    // ... mais campos
};
```

### 💡 Exemplo Básico: Aluno
```c
#include <stdio.h>
#include <string.h>

// Definindo a struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    // Declarando uma variável do tipo struct Aluno
    struct Aluno aluno1;

    // Atribuindo valores aos campos da struct
    strcpy(aluno1.nome, "Maria");
    aluno1.idade = 20;
    aluno1.nota = 8.5;

    // Exibindo os valores
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}
```

### 🎯 Formas de Inicializar Struct

#### 1. Inicialização na declaração:
```c
struct Aluno aluno1 = {"João", 22, 9.5};
```

#### 2. Inicialização campo por campo:
```c
struct Aluno aluno1;
strcpy(aluno1.nome, "João");
aluno1.idade = 22;
aluno1.nota = 9.5;
```

#### 3. Inicialização com designadores:
```c
struct Aluno aluno1 = {
    .nome = "João",
    .idade = 22,
    .nota = 9.5
};
```

### 🎯 Acesso aos Campos
- Use o **operador ponto (.)** para acessar campos da struct
```c
struct Aluno aluno;
aluno.idade = 20;           // atribuição
int idade_valor = aluno.idade;  // leitura
printf("%s", aluno.nome);   // uso em printf
```

### 💡 Exemplos Práticos

#### Exemplo 1: Struct Produto
```c
#include <stdio.h>
#include <string.h>

struct Produto {
    int codigo;
    char nome[30];
    float preco;
    int estoque;
};

int main() {
    struct Produto produto1 = {101, "Notebook", 2500.00, 5};
    
    printf("Código: %d\n", produto1.codigo);
    printf("Nome: %s\n", produto1.nome);
    printf("Preço: R$ %.2f\n", produto1.preco);
    printf("Estoque: %d unidades\n", produto1.estoque);
    
    return 0;
}
```

#### Exemplo 2: Struct Ponto (coordenadas)
```c
#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

// Função para calcular distância entre dois pontos
float calcular_distancia(struct Ponto p1, struct Ponto p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    struct Ponto ponto1 = {0.0, 0.0};
    struct Ponto ponto2 = {3.0, 4.0};
    
    float distancia = calcular_distancia(ponto1, ponto2);
    printf("Distância entre os pontos: %.2f\n", distancia);
    
    return 0;
}
```

### 🎯 Array de Structs
```c
#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno turma[3];
    
    // Preenchendo o array de structs
    strcpy(turma[0].nome, "Ana");
    turma[0].idade = 20;
    turma[0].nota = 8.5;
    
    strcpy(turma[1].nome, "Bruno");
    turma[1].idade = 19;
    turma[1].nota = 7.8;
    
    strcpy(turma[2].nome, "Carlos");
    turma[2].idade = 21;
    turma[2].nota = 9.2;
    
    // Exibindo todos os alunos
    printf("Lista de Alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d: %s, %d anos, nota %.2f\n", 
               i+1, turma[i].nome, turma[i].idade, turma[i].nota);
    }
    
    return 0;
}
```

### 🎯 Structs e Funções

#### Passando struct por valor:
```c
void exibir_aluno(struct Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Nota: %.2f\n", a.nota);
}
```

#### Passando struct por referência (ponteiro):
```c
void modificar_nota(struct Aluno *a, float nova_nota) {
    a->nota = nova_nota;  // uso do operador ->
}

// Ou também pode usar:
void modificar_nota_alt(struct Aluno *a, float nova_nota) {
    (*a).nota = nova_nota;  // equivalente ao ->
}
```

### 🎯 Typedef com Structs
O `typedef` cria um "apelido" para a struct, simplificando o uso:

```c
#include <stdio.h>

// Sem typedef
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

// Com typedef
typedef struct {
    char nome[50];
    int idade;
    float nota;
} AlunoTD;

int main() {
    // Sem typedef - precisa usar "struct"
    struct Aluno aluno1;
    
    // Com typedef - não precisa usar "struct"
    AlunoTD aluno2;
    
    return 0;
}
```

### 💡 Exemplo Completo: Sistema de Cadastro
```c
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    int idade;
    float salario;
} Funcionario;

void cadastrar_funcionario(Funcionario *f) {
    printf("Digite o ID: ");
    scanf("%d", &f->id);
    
    printf("Digite o nome: ");
    getchar(); // limpar buffer
    fgets(f->nome, sizeof(f->nome), stdin);
    f->nome[strcspn(f->nome, "\n")] = '\0'; // remover \n
    
    printf("Digite a idade: ");
    scanf("%d", &f->idade);
    
    printf("Digite o salário: ");
    scanf("%f", &f->salario);
}

void exibir_funcionario(Funcionario f) {
    printf("\n--- Dados do Funcionário ---\n");
    printf("ID: %d\n", f.id);
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Salário: R$ %.2f\n", f.salario);
}

int main() {
    Funcionario func;
    
    printf("=== Cadastro de Funcionário ===\n");
    cadastrar_funcionario(&func);
    
    exibir_funcionario(func);
    
    return 0;
}
```

### ⚠️ Pontos Importantes

1. **Acesso aos campos:**
   - Com variável: `variavel.campo`
   - Com ponteiro: `ponteiro->campo` ou `(*ponteiro).campo`

2. **Strings em structs:**
   - Use `strcpy()` para atribuir valores
   - Use `strcmp()` para comparar

3. **Inicialização:**
   - Sempre inicialize antes de usar
   - Ordem dos valores na inicialização deve seguir a ordem dos campos

4. **Passagem para funções:**
   - Por valor: copia toda a struct (mais lento)
   - Por referência: passa apenas o endereço (mais eficiente)

### 🎯 Structs Aninhadas
```c
struct Endereco {
    char rua[100];
    int numero;
    char cidade[50];
};

struct Pessoa {
    char nome[50];
    int idade;
    struct Endereco endereco;  // struct dentro de struct
};

int main() {
    struct Pessoa p;
    
    strcpy(p.nome, "João");
    p.idade = 30;
    strcpy(p.endereco.rua, "Rua das Flores");
    p.endereco.numero = 123;
    strcpy(p.endereco.cidade, "São Paulo");
    
    printf("Nome: %s\n", p.nome);
    printf("Endereço: %s, %d - %s\n", 
           p.endereco.rua, p.endereco.numero, p.endereco.cidade);
    
    return 0;
}
```

---

## 16. Dicas Importantes para a Prova

### 🎯 Principais Pontos de Atenção

#### 1. **Sintaxe Correta**
```c
// ✅ Correto
scanf("%d", &variavel);
printf("%d", variavel);

// ❌ Comum esquecer
scanf("%d", variavel);    // falta &
printf("%d", &variavel);  // & desnecessário
```

#### 2. **Inicialização de Variáveis**
```c
// ✅ Sempre inicializar contadores
int soma = 0, contador = 0;

// ❌ Variável não inicializada
int soma;  // pode ter lixo de memória
```

#### 3. **Loops e Índices**
```c
// ✅ Cuidado com os limites
for (int i = 0; i < TAM; i++) {  // 0 até TAM-1
    vetor[i] = i;
}

// ❌ Erro comum
for (int i = 1; i <= TAM; i++) { // 1 até TAM (estoura)
    vetor[i] = i;  // vetor[TAM] não existe!
}
```

#### 4. **Strings e Caracteres**
```c
// ✅ String precisa de espaço para '\0'
char nome[10];  // para 9 caracteres + '\0'

// ✅ Espaço antes de %c para limpar buffer
scanf(" %c", &caractere);
```

#### 5. **Ponteiros**
```c
// ✅ Sempre verificar se ponteiro é válido
int *p = &variavel;
if (p != NULL) {
    *p = 10;
}
```

### 📝 Checklist para Exercícios

#### **Antes de Começar:**
- [ ] Ler o problema **completamente**
- [ ] Identificar **entrada**, **processamento** e **saída**
- [ ] Escolher **tipos de dados** apropriados
- [ ] Pensar na **estrutura** (if, while, for, função)

#### **Durante o Desenvolvimento:**
- [ ] **Declarar** todas as variáveis necessárias
- [ ] **Inicializar** contadores e acumuladores
- [ ] **Validar** entradas quando necessário
- [ ] Usar **nomes** descritivos para variáveis
- [ ] **Comentar** partes complexas

#### **Ao Finalizar:**
- [ ] Fazer **teste de mesa** com valores exemplo
- [ ] Verificar **limites** de arrays/matrizes
- [ ] Confirmar **formato** da saída
- [ ] Revisar **sintaxe** (pontos e vírgulas, parênteses)

### 🚨 Erros Mais Comuns

1. **Esquecer `&` no `scanf`**
   ```c
   scanf("%d", numero);     // ❌ 
   scanf("%d", &numero);    // ✅
   ```

2. **Confundir `=` com `==`**
   ```c
   if (x = 5) { }          // ❌ atribuição
   if (x == 5) { }         // ✅ comparação
   ```

3. **Esquecer `break` no `switch`**
   ```c
   case 1:
       printf("Um");
       // ❌ falta break, vai executar case 2 também
   case 2:
       printf("Dois");
       break;
   ```

4. **Acessar índice inválido**
   ```c
   int vetor[5];
   vetor[5] = 10;          // ❌ índice 5 não existe (0-4)
   ```

5. **Não inicializar contadores**
   ```c
   int soma;               // ❌ não inicializado
   int soma = 0;           // ✅ inicializado
   ```

### 🎯 Estratégias para a Prova

1. **Leia o enunciado 2-3 vezes**
2. **Faça um rascunho** da lógica antes de codificar
3. **Teste com valores pequenos** primeiro
4. **Use nomes claros** para variáveis
5. **Comente partes importantes**
6. **Reserve tempo** para revisão final

### 💡 Fórmulas e Padrões Úteis

#### **Troca de valores (sem variável auxiliar):**
```c
a = a + b;
b = a - b;
a = a - b;
```

#### **Verificar se número é primo:**
```c
int eh_primo = 1;  // assume que é primo
for (int i = 2; i <= numero/2; i++) {
    if (numero % i == 0) {
        eh_primo = 0;  // não é primo
        break;
    }
}
```

#### **Calcular fatorial:**
```c
int fatorial = 1;
for (int i = 1; i <= n; i++) {
    fatorial *= i;
}
```

#### **Encontrar maior em vetor:**
```c
int maior = vetor[0];
for (int i = 1; i < tamanho; i++) {
    if (vetor[i] > maior) {
        maior = vetor[i];
    }
}
```

---

## 🎓 Conclusão

Este guia abrange todos os tópicos essenciais da disciplina de Programação em C. Para uma preparação eficaz:

1. **Revise cada tópico** com atenção aos exemplos
2. **Pratique os exercícios** de cada pasta
3. **Faça testes de mesa** dos códigos mais complexos
4. **Memorize as sintaxes** básicas
5. **Entenda a lógica** por trás de cada estrutura

**Lembre-se:** A programação se aprende praticando! Resolva o máximo de exercícios possível e sempre teste seus códigos mentalmente.

**Boa sorte na prova! 🍀**

---

> *Preparado por: João Henrique Lopes*  
> *Base: Exercícios da disciplina - Professora Pitan*  
> *Data: Junho 2025*
