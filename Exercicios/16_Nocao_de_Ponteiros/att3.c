#include <stdio.h>

int main() {
    char a, b, *p; // Declara três variáveis: 'a' e 'b' do tipo char, e 'p' como ponteiro para char
    b = 'c';       // Atribui o caractere 'c' à variável 'b'
    p = &a;        // Faz o ponteiro 'p' apontar para o endereço de 'a'
    *p = b;        // Atribui o valor de 'b' (ou seja, 'c') ao local apontado por 'p' (ou seja, 'a')
    printf("%c", a); // Imprime o valor de 'a', que agora é 'c'
    // Saída: c
}