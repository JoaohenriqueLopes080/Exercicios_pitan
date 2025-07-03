# Exercícios: Incremento, Decremento e Parênteses em C

Considere sempre a variável `int p;` previamente declarada e inicializada conforme o enunciado. Resolva os itens abaixo, analisando o valor final de `p` e, quando houver, o valor da expressão avaliada.

---

## 1. Pré-Decremento: `--p`
**Enunciado:**  
Dado `int p = 10;`, execute `--p;`.  
**Pergunta:**  
Qual o valor de `p` após essa instrução?

---

## 2. Pós-Incremento: `p++`
**Enunciado:**  
Dado `int p = 5;`, execute `int x = p++;`.  
**Pergunta 1:**  
Qual o valor de `x` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

---

## 3. Pré-Incremento: `++p`
**Enunciado:**  
Dado `int p = 3;`, execute `++p;`.  
**Pergunta:**  
Qual o valor de `p` após essa instrução?

---

## 4. Duplo Pré-Decremento com Parênteses: `(--(p))`
**Enunciado:**  
Dado `int p = 7;`, execute `int y = --(p);`.  
**Pergunta 1:**  
Qual o valor de `y` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

---

## 5. Negação com Parênteses: `(-(p))`
**Enunciado:**  
Dado `int p = 4;`, execute `int z = (-(p));`.  
**Pergunta 1:**  
Qual o valor de `z` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

---

## 6. Parênteses e Pós-Incremento: `((p)++)`
**Enunciado:**  
Dado `int p = 2;`, execute `int t = ((p)++);`.  
**Pergunta 1:**  
Qual o valor de `t` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

---

## 7. Parênteses e Pré-Incremento: `((p)+)`
**Enunciado:**  
Dado `int p = 9;`, execute `int w = ((p)+);`.  
**Pergunta:**  
O código compila? Se sim, qual o valor de `w`?  
Se não, explique o motivo.

---

## 8. Parênteses e Pós-Incremento (com duplo parêntese): `((p++))`
**Enunciado:**  
Dado `int p = 8;`, execute `int q = ((p++));`.  
**Pergunta 1:**  
Qual o valor de `q` após a instrução?  
**Pergunta 2:**  
Qual o valor de `p` após a instrução?

---

## 9. Apenas Pós-Incremento: `(p++)`
**Enunciado:**  
Dado `int p = 6;`, execute `(p++);`.  
**Pergunta:**  
Qual o valor de `p` após essa instrução?

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
