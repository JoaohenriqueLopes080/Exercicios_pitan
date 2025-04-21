#include<stdio.h>
#include<math.h>

int main() {
    int numero;
    float peso, pesoterra, pesoplaneta, gravidade;

    printf("Digite um peso da terra");
    scanf("%f", &peso);

    printf("\nPlanetas Disponives :\n 1 - MERCURIO | 2 - VÊNUS | 3 - MARTE | 4 - JUPITER | 5 - SATURNO | 6 - URANO\n");

    printf("Digite o numero do Planeta: \n");
    scanf("%d", &numero);

    
    pesoterra = peso / 10;
    switch (numero) {
        case 1:
            gravidade = 0.37;
            pesoplaneta = pesoterra * gravidade;
            printf("Esse peso nesse planeta é ; \n %f", pesoplaneta);
            break;
        case 2:
        gravidade = 0.88;
        pesoplaneta = pesoterra * gravidade;
        printf("Esse peso nesse planeta é ; \n%f", pesoplaneta);
            break;
        case 3:
        gravidade = 0.38;
        pesoplaneta = pesoterra * gravidade;
        printf("Esse peso nesse planeta é ; \n%f", pesoplaneta);
            break;
        case 4:
        gravidade = 2.64;
        pesoplaneta = pesoterra * gravidade;
        printf("Esse peso nesse planeta é ; \n %f", pesoplaneta);
            break;
        case 5:
        gravidade = 1.15;
        pesoplaneta = pesoterra * gravidade;
        printf("Esse peso nesse planeta é ; \n %f", pesoplaneta);
            break;
        case 6:
        gravidade =  1.17;
        pesoplaneta = pesoterra * gravidade;
        printf("Esse peso nesse planeta é ; \n %f", pesoplaneta);
            break;
        default:
            printf("Planeta inválido.\n");
            return 1;
    }
}