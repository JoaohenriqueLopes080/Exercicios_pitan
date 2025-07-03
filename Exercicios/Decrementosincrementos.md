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

# Explicação: Incremento, Decremento e Parênteses em C

Abaixo estão explicações sobre o que cada expressão faz em C, utilizando a variável inteira `p`:

---

## 1. `--p` (Pré-decremento)
- **O que faz:** Diminui o valor de `p` em 1 **antes** de usá-lo na expressão.
- **Exemplo:**  
  Se `p = 10`, após `--p;`, `p` passa a ser 9.

---

## 2. `p++` (Pós-incremento)
- **O que faz:** Usa o valor atual de `p` na expressão e, **depois**, incrementa `p` em 1.
- **Exemplo:**  
  Se `p = 5`, após `int x = p++;`, `x` recebe 5 e depois `p` passa a ser 6.

---

## 3. `++p` (Pré-incremento)
- **O que faz:** Incrementa `p` em 1 **antes** de usá-lo na expressão.
- **Exemplo:**  
  Se `p = 3`, após `++p;`, `p` passa a ser 4.

---

## 4. `(--(p))` (Pré-decremento com parênteses)
- **O que faz:** Igual a `--p`. Os parênteses extras não alteram o comportamento.
- **Exemplo:**  
  Se `p = 7`, após `int y = --(p);`, `p` passa a ser 6 e `y` recebe 6.

---

## 5. `(-(p))` (Negação com parênteses)
- **O que faz:** Aplica o sinal negativo ao valor de `p` (não altera o valor de `p`).
- **Exemplo:**  
  Se `p = 4`, após `int z = (-(p));`, `z` recebe -4 (e `p` continua 4).

---

## 6. `((p)++)` (Pós-incremento com parênteses)
- **O que faz:** Igual a `p++`. Os parênteses não afetam o comportamento.
- **Exemplo:**  
  Se `p = 2`, após `int t = ((p)++);`, `t` recebe 2 e depois `p` passa a ser 3.

---

## 7. `((p)+)` (Parênteses e operador +)
- **O que faz:** Não é uma expressão válida em C. O operador `+` sozinho após o valor não faz sentido.  
  Vai gerar erro de compilação.

---

## 8. `((p++))` (Pós-incremento com parênteses duplos)
- **O que faz:** Igual a `p++`. Os parênteses extras não mudam o comportamento.
- **Exemplo:**  
  Se `p = 8`, após `int q = ((p++));`, `q` recebe 8 e depois `p` passa a ser 9.

---

## 9. `(p++)` (Pós-incremento com parênteses)
- **O que faz:** Igual a `p++`. Os parênteses não alteram o comportamento.
- **Exemplo:**  
  Se `p = 6`, após `(p++);`, `p` passa a ser 7.

---





