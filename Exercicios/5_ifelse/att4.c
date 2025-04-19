#include <stdio.h>

int main() {
    int num;

    printf("Digite um valor de numero: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("É divisivel por 3 e por 7\n");
    } else {
        printf("O numero não é divisivel por 3 e por 7 simultaneamente\n");
    }
    return 0;
}