#include <stdio.h>

int main()
{
    float a, b, h;

    printf("digite o valor da base: ");
    scanf("%f", &b);

    printf("Digite o valor da altura");
    scanf("%f", &h);

    a = (b * h) / 2;

    printf(" A area de um triangulo é: %f", a);
    return 0;
}