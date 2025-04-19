#include <stdio.h>
#include <math.h.>

int main() {
    int num;
    float inverso;

    printf("Digite um valor de numero: ");
    scanf("%d", &num);

    if (num > 0) {
        inverso = 1.0 / num;
        printf("O inverso do Num é: %f\n", inverso);
    } else {
        printf("O Numero é absoluto :  %f\n", fabs(num));
    }

    return 0;
}