# Expressões em C

Expressões em C são combinações de variáveis, constantes, operadores e funções que produzem um valor. Elas são fundamentais para a construção de programas.

## 1. Tipos de Expressões

### Expressões Aritméticas

Realizam operações matemáticas.

```c
int a = 5 + 3 * 2; // a = 11
float b = (7.0 - 2.0) / 3.0; // b = 1.666...
```

### Expressões Relacionais

Comparam valores e retornam `0` (falso) ou `1` (verdadeiro).

```c
int x = 10, y = 20;
int resultado = x < y; // resultado = 1
```

### Expressões Lógicas

Combinam expressões usando operadores lógicos.

```c
int a = 5, b = 10;
int c = (a < b) && (b > 0); // c = 1
```

### Expressões de Atribuição

Atribuem valores a variáveis.

```c
int x;
x = 7; // Expressão de atribuição
```

## 2. Operadores em Expressões

- **Aritméticos:** `+`, `-`, `*`, `/`, `%`
- **Relacionais:** `==`, `!=`, `<`, `>`, `<=`, `>=`
- **Lógicos:** `&&`, `||`, `!`
- **Atribuição:** `=`, `+=`, `-=`, `*=`, `/=`, `%=` 

## 3. Precedência e Associatividade

A ordem de avaliação dos operadores segue regras de precedência. Parênteses podem alterar essa ordem.

```c
int resultado = 2 + 3 * 4; // resultado = 14
int resultado2 = (2 + 3) * 4; // resultado2 = 20
```

## 4. Exemplos Práticos

### Exemplo 1: Expressão Simples

```c
int soma = 10 + 20;
```

### Exemplo 2: Expressão Composta

```c
int resultado = (a + b) * (c - d) / 2;
```

### Exemplo 3: Expressão Lógica

```c
if ((idade >= 18) && (idade <= 65)) {
    printf("Adulto em idade ativa.\n");
}
```

## 5. Dicas

- Use parênteses para garantir a ordem desejada.
- Atente-se ao tipo das variáveis para evitar erros de conversão.
- Teste expressões complexas em partes menores.

---
