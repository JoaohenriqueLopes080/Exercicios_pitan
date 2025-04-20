/*
Leia três valores correspondentes às medidas dos lados (a, b e c)
de uma figura geométrica, e verifique se eles formam ou não um
triângulo. Caso os valores formem triângulo calcule e exiba a sua
área. Caso contrário, informe que eles “Não formam um triângulo”.
Obs.: 

Para construir um triângulo é necessário que a medida de
qualquer um dos lados seja menor que a soma das medidas dos
outros dois e maior que o valor absoluto da diferença entre essas
medidas.

A área de um triângulo pode ser calculada em função de
seus lados:

a = Raiz S * (S - A) * ( S - B ) * (S - C)
onde
S = (a +b + c) / 2 é o semi-perimetro
*/

#include<stdio.h>
#include<math.h>

int main() {

    int a ,b ,c, a2 = 0, b2 = 0, c2 = 0;
    double s, a3; 

    printf("Digite a Medida A");
    scanf("%d", &a);

    printf("Digite a Medida B");
    scanf("%d", &b);

    printf("Digite a Medida C ");
    scanf("%d", &c);
    // A
    if(a < b + c && a > fabs(b - c)) {
        a2 = 1;
    } 
        else 
     {
        printf("Não Formam um Triangulo\n");
     } // B
        if(b < a + c && b > fabs(a - c)) {
          b2 = 1;
     } 
        else 
    {
        printf("Não Formam um Triangulo\n");
    } // C
        if(c < a + b && c > fabs(a - b)) {
          c2 = 1;
    } else {
        printf("Não Formam um Triangulo\n");
    }

    if(a2 == 1 && b2 == 1 && c2 == 1) {
        s = (a + b + c) / 2; // Semi-Perimetro

        a3 = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Sua Area é: %.2lf", a3);
    }
    return 0;
}