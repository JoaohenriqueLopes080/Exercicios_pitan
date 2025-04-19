/*Calcule as raízes de uma equação de segundo grau. Lembre-se que
quando A for nulo, a equação é de primeiro grau (só tem uma raiz),
e também que quando delta é negativo a equação não tem raízes.*/

#include<stdio.h>
#include<math.h>

int main(){
    float x1, x2, a, b, c;
    double raiz1, delta;
    // formula  

    //ax² + bx + c = 0
    printf("Digite o Valor De A: \n");
    scanf("%f", &a);

    printf("Digite o Valor De B: \n");
    scanf("%f", &b);

    printf("Digite o valor de C: \n"); 
    scanf("%f", &c);  

    delta = (b * b) - (4 * a * c);
    raiz1 = sqrt(delta);

    if(a == 0) {
        if(b != 0) {
            x1 = -c / b;
            printf("A equação é de primeiro grau, a raiz é %lf\n:", x1);
        } else {
            printf("Credenciais invalidas");
        }
    }
    if(delta > 0) {
        x1 = (-b + raiz1) / (2 * a);
        x2 = (-b - raiz1) / (2 * a);
        
    printf("A Equação Possui Duas Raízes reais e distintas \n Raiz 1: \"%lf\" \n Raiz 2: \"%lf\" ", x1, x2);
    }
    if(delta == 0) {
        x1 = (-b + raiz1) / (2 * a);
    
        printf("É Uma unica Raiz Real : \n Raiz 1 \"%lf\"", x1);
    }
    if(delta < 0) {
        printf("Não Possui Raizes Reais");
    }
}

