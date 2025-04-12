// feito em video aula
#include <stdio.h>

int main()  {           
/*         8) Observe as instruções abaixo:
         a) printf(“ab%dcd”, 27);
         imprime o texto substituindo o %d pelo número contido após a
         vírgula, ou seja, imprime ab27cd;
         b) printf(“xy%3dwz”, 65);
         faz o mesmo com o número ocupando 3 posições da linha,
         alinhado no lado direito, ou seja, imprime xy 65wz
         c) printf(“*a%-4d*a”, 58);
         faz o mesmo com o número ocupando 4 posições da linha,
         alinhado no lado esquerdo, ou seja, imprime *a58 *a

         Exercicio (9) Contem 8

         Cont. 8)
         Com base nos exemplos anteriores, faça um programa que reproduza a
         figura abaixo, sem utilizar espaço em branco no printf:

             *1111 1111*
             *111   111*
             *11     11*
             *1       1*
             *11     11*
             *111   111*
             *1111 1111*
         */
 printf("*1111%2d111*\n", 1);
 printf("*111%4d11*\n", 1);
 printf("*11%6d1*\n", 1);
 printf("*1%8d*\n", 1);
 printf("*11%6d1*\n", 1);
 printf("*111%4d11*\n", 1);
 printf("*1111%2d111*\n", 1);
}