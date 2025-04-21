/*4) O dono de uma empresa de venda de passagens aéreas decidiu aumentar seu
negócio realizando fretes turísticos por todo o Brasil. 


Para isso ele deve calcular o
preço do diesel de acordo com a distância que a van vai andar.

Faça um
programa que chame uma função que leia o número de km que deverão ser
rodados
(entre 0 e 900 km),

e imprima o gasto em diesel que ele deverá ter.

Levando em consideração que:
 O tanque da van suporta 90 litros de diesel;
 Ela roda 10 km com 1 litro de diesel;
 O preço do litro do diesel é R$ 2,50;
 O posto que a van será abastecida está fazendo uma promoção. Se
forem abastecidos mais de 45 litros, o preço do litro sai por R$ 2,30.
Entrada: A entrada contém um inteiro que indica os km que a van precisará
viajar.
Saída: A saída consiste em imprimir o preço de diesel que será gasto.

Exemplo:
Entrada Saída
500 R$ 115,00*/

#include<stdio.h>
#include<math.h>

 float calculo_diesel(int km){
    float litros_necessarios, preco_diesel, preco_promocao, calculo_total;
    preco_diesel = 2.50;
    preco_promocao = 2.30;
    litros_necessarios = km / 10;
   
    if(litros_necessarios <= 45) {
        calculo_total = litros_necessarios * preco_diesel;
    } else {
        if (litros_necessarios > 45)
        {
            calculo_total = litros_necessarios * preco_promocao;
        }
    }
        return calculo_total;
 }
int main() {
    int km;
    float calculo_total;
    printf("Digite a quantidade de kilometros que a van precisara andar");
    scanf("%d", &km);

    if(km < 0 || km > 900){
        printf("Valor Errado, Digite novamente.");
    }

    calculo_total = calculo_diesel(km);
    printf("O gasto total sera : %f", calculo_total);

}