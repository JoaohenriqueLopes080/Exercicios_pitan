/* Leia um conjunto de 4 valores i, a, b, c, onde i é inteiro e positivo e
a, b, c são reais. Escreva os valores lidos e, a seguir:
• Se i = 1 escrever os valores a, b, c em ordem crescente.
• Se i = 2 escrever os valores a, b, c em ordem decrescente.
• Se i = 3 escrever os valores a, b, c de forma que o maior fique
entre os outros dois */

#include<stdio.h>
#include<math.h>

int main() {
    int i;
    float a, b, c, temp;

    printf("Digite um valor real para A: \n");
    scanf("%f", &a);
    
    printf("Digite um valor real para B: \n");
    scanf("%f", &b);
    
    printf("Digite um valor real para C: \n");
    scanf("%f", &c);
    
    printf("Digite um valor inteiro e positivo (1, 2, 3)\n");
    scanf("%d", &i);


    switch (i)
    {
    case 1:
        if(a > b) { // se a é maior que b, b ganha valor maior de a e a ganha valor menor de b
        temp = a;
        a = b;
        b = temp;
        }
        if (a > c) { // se a é maior que c, a ganha valor menor de c e c ganha valor maior de a
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c) { // se b for maior que c, b ganha valor menor de c e c ganha valor maior de b
            temp = b;
            b = c;
            c = temp;
            }
    printf("Em ordem Crescente: %f, %f, %f", a, b, c);
        break;
    case 2:
        if (a < b){ // se a é menor que b, a ganha valor maior de b e b ganha valor menor de a
        temp = a;
        a = b;
        b = temp;
        }
        if (a < c) // se á é menor que c, a ganha valor maior de c e c ganha valor menor de a
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (b < c) // se b é menor que c, b ganha valor maior de c e c ganha valor menor de a
        {
            temp = b;
            b = c;
            c = temp;
        }
    printf("Em Ordem Decrescente: %f, %f, %f", a, b, c);
        break;
    case 3:
        /*  • Se i = 3 escrever os valores a, b, c de forma que o maior fique
            entre os outros dois */
            if(a > b) { // se a é maior que b, a ganha valor menor b e b ganha valor maior de a 
                temp = a;
                a = b;
                b = temp;
            }
            if(a > c) { //se a é maior que c, a ganha valor menor de c e c ganha valor maior de a
                temp = a;
                a = c;
                c = temp;
            }
            if(b > c) { // se b é maior que c, b ganha valor menor de c e c ganha valor maior de b
                temp = b;
                b = c;
                c = temp; // maior valor esta em c agora 
            }       // a < b < c - Crescente
            // c é o maior
            if(b < c) { // colocando o maior na segunda posição
                temp = c;
                c = b;
                b = temp;
            }

            printf("o maior fica no meio : %f, %f, %f", a,b,c);

        break;
    default: printf("ta errado.");
        break;
    }




}