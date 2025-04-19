#include<stdio.h>

int main() {

float peso_ideal, altura;
char sexo;

printf("digite sua altura : \n");
scanf("%f", &altura);

printf("Seu sexo : (F/M) \n");
scanf(" %c", &sexo);

if(sexo == 'F' || sexo == 'f') {
    peso_ideal = (62.1 * altura) - 44,7;
    printf("%f", peso_ideal);
} else { // Presume-se que o sexo seja masculino se não for feminino
    peso_ideal = (72.7 * altura) - 58;
    printf("%f", peso_ideal);
}
return 0;
}