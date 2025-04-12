#include <stdio.h>
    
int main () {

   int x;
   float y;
   double z;

    printf("digite o valor para x");
    scanf("%i,%f,%Lf", &x,&y,&z);

       printf("digite o valor para y");
    scanf("%f",&y);

       printf("digite o valor para z");
    scanf("%4.Lf",&z);

    printf("x = %d\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.4lf\n", z);


    return 0;
}

/* Feito em video
#include <stdio.h>

int main() {
/*Declare 3 variáveis: uma inteira (x), uma real de precisão curta (y) e uma real
    de precisão longa (z). A seguir, leia valores para cada uma e as imprima,
        sendo y impressa com 3 casas decimais e z com 4.

int x;
float y;
long double z;


printf("Digite Tres numeros seguidos (1 Inteiro, 1 Real, e 1 Real Longo): \n");
scanf("%d %f %lf", &x, &y, &z);

printf("Inteiro: %d\n Real Curto: %.3f\n Real Longo: %.4Lf\n", x, y, z);

}
*/