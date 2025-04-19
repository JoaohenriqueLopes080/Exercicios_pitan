#include <stdio.h>

int main() {
   
    int a;
   
    printf("Digite um valor:\n");
    scanf("%d", &a);
   
    if(a > 0){
        printf("Num Positivo");
    } else if(a < 0) {
        printf("Num Negativo");
    } else {
        printf("Num Nulo");
    }
}