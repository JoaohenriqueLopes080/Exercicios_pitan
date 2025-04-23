/* Calcule e escreva o valor de S:

     1   3   5   7       99
 s = - + - + - + - ... + --
     1   2   3   4       50

     */
int main () {

    int i, tam,divisor, denominador;
    float s;

    tam = 50;
    s = 0;
    i = 0;
    denominador = -1;
    divisor = 0;

    for (i = 0; i < tam; i++)
    {
        denominador = denominador + 2;
        divisor = divisor + 1;
        s = s + denominador / divisor;
    }

    printf("Valor de S é : %.2f", s);

}