#include <stdio.h>

int main(){
    int a, b, temp;
    
    printf("Digite o valor de A: \n");
    scanf("%d", &a);
    
    printf("Digite o valor de B: \n");
    scanf("%d", &b);
    
    printf("Valores inteiros antes da troca: %d\n %d", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("valores trocados: %d\n %d", a, b);
}