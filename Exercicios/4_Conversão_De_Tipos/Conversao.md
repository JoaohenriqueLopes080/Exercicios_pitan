# Conversão de Tipos em C

A conversão de tipos (type casting) em C é o processo de transformar um valor de um tipo de dado para outro. Existem dois tipos principais de conversão: **implícita** (automática) e **explícita** (manual).

---

## 1. Conversão Implícita

Ocorre automaticamente quando você atribui um valor de um tipo menor para um tipo maior.

```c
int inteiro = 10;
float real = inteiro; // Conversão implícita de int para float
```

**Observação:** Pode haver perda de precisão ao converter de tipos maiores para menores.

---

## 2. Conversão Explícita (Type Casting)

É feita manualmente pelo programador usando o operador de cast.

```c
float real = 5.75;
int inteiro = (int) real; // inteiro recebe 5 (parte decimal é descartada)
```

---

## 3. Exemplos Práticos

### a) De `char` para `int`

```c
char letra = 'A';
int codigo = (int) letra; // código recebe 65 (valor ASCII de 'A')
```

### b) De `int` para `double`

```c
int x = 7;
double y = (double) x; // y recebe 7.0
```

### c) Operações com Conversão

```c
int a = 5, b = 2;
float resultado = (float)a / b; // resultado recebe 2.5
```

---

## 4. Cuidados

- **Perda de dados:** Converter de `float` para `int` descarta a parte decimal.
- **Overflow/Underflow:** Converter valores grandes para tipos menores pode causar resultados inesperados.

---

## 5. Resumo

- Use conversão implícita para tipos compatíveis e seguros.
- Use conversão explícita quando necessário, sempre atento à possibilidade de perda de dados.

---