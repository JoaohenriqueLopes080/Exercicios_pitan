#include<stdio.h>

#define tam 10

int main() {

    int i, vetor[10], cont, num;

    for(i = 0; i < tam; i++) {
        printf("Digite um valor : \n");
        scanf("%d", &vetor[i]);
 
    }

    printf("Digite um numero para ver suas ocorrencias");
    scanf("%d", &num);
    
    for (i = 0; i < tam; i++)
    {
        if(vetor[i] == num){
            cont++;
        }
    }
    
    for(i = 0; i < tam; i++) {
        printf("Numero De Ocorrencias : \n %d", cont++);
        printf("Numeros Digitados : \n %d", vetor[i]);
    }
    return 0;
}