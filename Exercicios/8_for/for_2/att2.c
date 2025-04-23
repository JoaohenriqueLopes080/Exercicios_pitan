/*Faça um programa que leia um número indeterminado de
duplas m e n, todos inteiros e positivos, uma dupla de cada
vez. Para cada dupla lida, o programa deve chamar uma
função que receba m e n e calcule a soma dos n inteiros
consecutivos a partir de m inclusive. Ao final, a função deve
retornar o valor da soma para a função main, que irá
imprimi-la. (ex.: para m = 2 e n = 4, a função irá calcular
2+3+4+5)*/


#include<stdio.h>

int sum(int n, int m){

    int soma;
    
    for(i = 0; i <= n;i++){

        soma = m + (m + i);
    
    }
    return soma;
}

int main(){
    int m, n, soma1;

    printf("digite um numero de m");
    scanf("%d", &m);

    printf("digite um numero de n");
    scanf("%d", &n);

    soma1 = sum(n,m);
    printf("A Soma é : %d", soma1);
    return 0;

}