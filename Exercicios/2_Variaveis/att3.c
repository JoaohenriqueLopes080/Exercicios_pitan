#include <stdio.h>

int main(void) {
int inteira;
float real;

printf("digite um valor real e inteiro");
scanf("%f %d", &real, &inteira);

printf("O valor de Int é: %d, o valor de real é: %f\\n", inteira, real);

return 0;
}