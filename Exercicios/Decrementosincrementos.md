# Exercícios: Incremento, Decremento e Parênteses em C

Considere sempre a variável `int p;` previamente declarada e inicializada conforme o enunciado. Resolva os itens abaixo, analisando o valor final de `p` e, quando houver, o valor da expressão avaliada.

---

## 1. Pré-Decremento: `--p`
**Enunciado:**  
Dado `int p = 10;`, execute `--p;`.  
**Pergunta:**  
Qual o valor de `p` após essa instrução?

**Resolução:**  
O operador `--p` diminui o valor de `p` em 1 antes de qualquer outra operação.  
Valor inicial: `p = 10`  
Após `--p;` → `p = 9`

**Resposta:**  
`p` vale **9**.

---

## 2. Pós-Incremento: `p++`
**Enunciado:**  
Dado `int p = 5;`, execute `int x = p++;`.  
**Pergunta 1:**  
Qual o valor de `x` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

**Resolução:**  
O operador `p++` retorna o valor atual de `p` e depois incrementa.  
Valor inicial: `p = 5`  
`x = p++;`  
Primeiro, `x` recebe 5. Depois, `p` passa a ser 6.

**Respostas:**  
1. `x` vale **5**.  
2. `p` vale **6**.

---

## 3. Pré-Incremento: `++p`
**Enunciado:**  
Dado `int p = 3;`, execute `++p;`.  
**Pergunta:**  
Qual o valor de `p` após essa instrução?

**Resolução:**  
O operador `++p` incrementa `p` antes de qualquer outra operação.  
Valor inicial: `p = 3`  
Após `++p;` → `p = 4`

**Resposta:**  
`p` vale **4**.

---

## 4. Duplo Pré-Decremento com Parênteses: `(--(p))`
**Enunciado:**  
Dado `int p = 7;`, execute `int y = --(p);`.  
**Pergunta 1:**  
Qual o valor de `y` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

**Resolução:**  
`--(p)` é o mesmo que `--p`; os parênteses não afetam o resultado.  
Valor inicial: `p = 7`  
Após `y = --(p);` → primeiro `p` vira 6, depois `y` recebe 6.

**Respostas:**  
1. `y` vale **6**.  
2. `p` vale **6**.

---

## 5. Negação com Parênteses: `(-(p))`
**Enunciado:**  
Dado `int p = 4;`, execute `int z = (-(p));`.  
**Pergunta 1:**  
Qual o valor de `z` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

**Resolução:**  
O operador `-` apenas nega o valor de `p`, mas não altera `p`.  
Valor inicial: `p = 4`  
Após `z = (-(p));` → `z` recebe `-4`; `p` permanece igual.

**Respostas:**  
1. `z` vale **-4**.  
2. `p` vale **4**.

---

## 6. Parênteses e Pós-Incremento: `((p)++)`
**Enunciado:**  
Dado `int p = 2;`, execute `int t = ((p)++);`.  
**Pergunta 1:**  
Qual o valor de `t` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

**Resolução:**  
Os parênteses não mudam o efeito do pós-incremento.  
Valor inicial: `p = 2`  
`t = ((p)++);` → `t` recebe 2, depois `p` passa a 3.

**Respostas:**  
1. `t` vale **2**.  
2. `p` vale **3**.

---

## 7. Parênteses e Pré-Incremento: `((p)+)`
**Enunciado:**  
Dado `int p = 9;`, execute `int w = ((p)+);`.  
**Pergunta:**  
O código compila? Se sim, qual o valor de `w`?  
Se não, explique o motivo.

**Resolução:**  
`((p)+)` não é uma expressão válida em C.  
O símbolo `+` após o parêntese não representa nenhum operador válido.  
Portanto, **o código não compila**.

**Resposta:**  
O código **não compila**.  
Motivo: `((p)+)` não é uma expressão válida em C.

---

## 8. Parênteses e Pós-Incremento (com duplo parêntese): `((p++))`
**Enunciado:**  
Dado `int p = 8;`, execute `int q = ((p++));`.  
**Pergunta 1:**  
Qual o valor de `q` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

**Resolução:**  
Duplos parênteses não alteram o comportamento do pós-incremento.  
Valor inicial: `p = 8`  
`q = ((p++));` → `q` recebe 8, depois `p` passa a 9.

**Respostas:**  
1. `q` vale **8**.  
2. `p` vale **9**.

---

## 9. Apenas Pós-Incremento: `(p++)`
**Enunciado:**  
Dado `int p = 6;`, execute `(p++);`.  
**Pergunta:**  
Qual o valor de `p` após essa instrução?

**Resolução:**  
Mesmo sem atribuição, o pós-incremento incrementa `p`.  
Valor inicial: `p = 6`  
Após `(p++);` → `p` passa a 7.

**Resposta:**  
`p` vale **7**.

---

> **Desafio Extra:**  
Para cada exercício acima, escreva o trecho de código correspondente em C, execute e verifique sua resposta.

---

# Explicação completa: Incremento, Decremento, Pré e Pós (com Parênteses) em C

Abaixo estão todas as formas possíveis e válidas de utilizar os operadores de incremento e decremento em C, utilizando a variável inteira `p`:

---

## Incremento

### 1. Pré-incremento: `++p`
- **O que faz:** Soma 1 a `p` **antes** de usá-lo na expressão.
- **Exemplo:**
  ```c
  int p = 3;
  int x = ++p; // p = 4, x = 4
  ```

### 2. Pós-incremento: `p++`
- **O que faz:** Usa o valor atual de `p` na expressão e **depois** soma 1 a `p`.
- **Exemplo:**
  ```c
  int p = 3;
  int x = p++; // x = 3, p = 4
  ```

### 3. Com parênteses (válido e mesmo efeito):

- `(++p)`  
- `((++p))`  
- `((p)++)`  
- `((p++))`

**Todos esses formatos são válidos e equivalentes aos anteriores. Os parênteses extras servem apenas para agrupar, não alteram o funcionamento.**

---

## Decremento

### 1. Pré-decremento: `--p`
- **O que faz:** Subtrai 1 de `p` **antes** de usá-lo na expressão.
- **Exemplo:**
  ```c
  int p = 5;
  int y = --p; // p = 4, y = 4
  ```

### 2. Pós-decremento: `p--`
- **O que faz:** Usa o valor atual de `p` na expressão e **depois** subtrai 1 de `p`.
- **Exemplo:**
  ```c
  int p = 5;
  int y = p--; // y = 5, p = 4
  ```

### 3. Com parênteses (válido e mesmo efeito):

- `(--p)`  
- `((--p))`  
- `((p)-- )`  
- `((p--))`

**Os parênteses apenas agrupam e não mudam o efeito.**

---

## Operador de Sinal (Negação)

- `-(p)` ou `(-p)`  
  **O que faz:** Apenas retorna o valor negativo de `p`, não altera `p`.
  ```c
  int p = 7;
  int z = -p; // z = -7, p = 7
  ```

---

## Formas NÃO válidas ou que geram erro de compilação

- `++(p++)`, `--(p--)`, `++++p`, `----p`, `++--p`, `p++++`, `p----`
- Misturar dois operadores seguidos no mesmo operando não é permitido.
- Tentar aplicar pré-incremento/pós-incremento no resultado de uma expressão, literal ou valor constante, por exemplo: `++(5)` (erro).
- `((p)+)` NÃO é válido em C, pois o operador `+` sozinho após o valor não faz sentido.

---

## Resumo

- **Pré:** `++p`, `--p`, `(++p)`, `(--p)`, `((++p))`, `((--p))`
- **Pós:** `p++`, `p--`, `(p++)`, `(p--)`, `((p++))`, `((p--))`
- **Negação:** `-p`, `-(p)`, `(-p)`
- **Combinações inválidas:** Operadores duplicados ou mistos como `p++++`, `----p`, etc.

---

> **Dica:** Parênteses extras podem ser usados para agrupar, mas não alteram o funcionamento dos operadores de incremento/decremento.  
> Sempre teste e leia o código com atenção para evitar ambiguidades.

---
