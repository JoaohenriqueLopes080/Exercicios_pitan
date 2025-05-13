#include<stdio.h>

    /*leia valores para uma matriz inteira (10,10) e escreva todos os
    elementos exceto os elementos da diagonal secundária.*/

#define tam 10

int main() {

    int i, j, matriz[tam][tam];

    i = 0; j = 0;

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    



    // aqui to imprimindo os da diagonal -- errado.
    for (i = 0; i < tam; i++){
        for (j = 9; j != 0; j--)
        {
            if( i  + j == 9){
        printf("Diagonal Secundaria", matriz);
    }
        }
    }
   
           
        
    }