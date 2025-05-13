/*Faça uma função que receba 2 strings e um valor inteiro,
representando uma posição. A seguir, insira a segunda string na
primeira, na posição indicada pelo valor.*/


#include<stdio.h>
#include<string.h>

void trocaposicao(int string1[], int string2[], int posicao)
    int 


int main() {

    int posicao;
    char string1[], string2[];

    printf("Digite um valor para a string 1\n");
    fgets(string1; strlen[string1]; stdin);

    printf("Digite um valor para a string 2\n");
    fgets(string1; strlen[string2]; stdin);

    printf("\ndigite um valor de posição");
    scanf("%d\n", &posicao);

    

    // antes
    printf("string1 \n%s ", string1);
    printf("\nstring2 \n%s", string2);
    printf("\nposição \n%d", posicao);

    trocaposicao(string1[],string2[],posicao);

    // depois

    printf("Strings Juntas");
    printf("%s", string1);


    







}