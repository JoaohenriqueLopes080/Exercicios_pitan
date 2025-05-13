/*7) Em uma danceteria o preço da entrada sofre variações. Domingo, Segunda e
Terça (‘D’, ‘2’, ‘3’), ela oferece um desconto de 25% no preço normal de entrada.
Nos dias de música ao vivo, o preço da entrada é acrescido em 15% em relação
ao preço normal. Faça um programa que chame uma função que leia o preço
normal da entrada, o dia da semana (‘D’, ‘2’, ‘3, ‘4’, ‘5’, ‘6’, ‘S’), e se é dia de
música ao vivo (‘S’ ou ‘N’). A função deve calcular e retornar o preço a ser pago
pela entrada, que deve ser impresso pela função main.

! = preço da entrada sofre variações

!!! - Domingo, Segunda e Terça ela oferece um desconto de 25% no preço normal de entrada.
(‘D’, ‘2’, ‘3’) 

!!! Nos dias de música ao vivo, o preço da entrada é acrescido em 15% em relação ao preço normal.

o dia da semana (‘2’, ‘3, ‘4’, ‘5’, ‘6’),

*/


#include<stdio.h>

float calculo(){
    float preco, preco_aovivo, preco_descontado;
    char dia1, vivo;
    
    printf("digite o preço de entrada");
    scanf("%f", &preco);

    printf("Digite o Dia da Semana : (D, 2, 3, 4, 5, 6, S)");
    scanf(" %c", &dia1);

    printf("É música ao vivo? (S/N)");
    scanf(" %c", &vivo);

    
   
    switch (dia1)
    {
    case 'D':
    // 25 de desconto + if(ao vivo == true) então + %15 de preço de entrada
    if(vivo == 's' || vivo == 'S') {

        preco_aovivo = preco * 0.15;
        preco = preco + preco_aovivo;
        preco_descontado = preco * 0.25;
        preco = preco - preco_descontado;

    } else {

        preco_descontado = preco * 0.25;
        preco = preco - preco_descontado;
    }
    
        break;
    case '2':
    // 25 de desconto + 15 de preço de entrada
    if(vivo == 's' || vivo == 'S') {

        preco_aovivo = preco * 0.15;
        preco = preco + preco_aovivo;
        preco_descontado = preco * 0.25;
        preco = preco - preco_descontado;

    } else {

       preco_descontado = preco * 0.25;
       preco = preco - preco_descontado;
    }
        break;
    case '3':
    // 25 de desconto + 15 de preço de entrada
    if(vivo == 's' || vivo == 'S') {

        preco_aovivo = preco * 0.15;
        preco = preco + preco_aovivo;
        preco_descontado = preco * 0.25;
        preco = preco - preco_descontado;

    } else {

        preco_descontado = preco * 0.25;
        preco = preco - preco_descontado;
    }
        break;
    case '4':
    if(vivo == 's' || vivo == 'S') {
        
        preco_aovivo = preco * 0.15;
        preco = preco + preco_aovivo;

    } else  {

        preco = preco;

    }
        break;
    case '5':
    if(vivo == 's' || vivo == 'S') {

        preco_aovivo = preco * 0.15;
        preco = preco + preco_aovivo;

    } else {
        preco = preco;
    }
        break;
    case '6':
    if(vivo == 's' || vivo == 'S') {

        preco_aovivo = preco * 0.15;
        preco = preco + preco_aovivo;

    } else {
        preco = preco;
    }
        break;

    case 'S':

    if(vivo == 's' || vivo == 'S') {

        preco_aovivo = preco * 0.15;
        preco = preco + preco_aovivo;

    } else {

        preco = preco;

    }
        break;
    default:
        printf("Esse dia não Existe.");
        break;
    }
    return (float)preco;
}


int main() {
     float valor_preço = calculo();

    printf("Valor a pagar : %f", valor_preço);
    return 0;
}