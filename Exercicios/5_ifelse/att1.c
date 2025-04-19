#include <stdio.h>

int main()
{
    float a, b, multiplo1, multiplo2;

    printf("Digite o valor de A e B");
    scanf("%f\n%f", &a, &b);

    multiplo1 = a / b;
    multiplo2 = b / a;

    if (a / b == multiplo1 && b / a == multiplo2) {
        printf("São Múltiplos");
    } else {
        printf("Não São Múltiplos");
    }

    return 0;
}