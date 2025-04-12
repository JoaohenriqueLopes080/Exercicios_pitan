#include<stdio.h>

int main()
{
    float rendimento,preco_combustivel,odometro_inicial,odometro_final,odometro_resultado,
    num_de_litros,valor_total,resultado_litros, media_consumo,lucro;
    
    preco_combustivel = 6,99;
    
    
    printf("digite o odometro inicial: (em KM)\n");
      scanf("%f", &odometro_inicial);
    
    printf("Digite o odômetro final: (Em KM)\n");
      scanf("%f", &odometro_final);
    
    odometro_resultado = odometro_inicial - odometro_resultado;
    
    printf("Digite o número de litros gastos:\n");
      scanf("%f", &num_de_litros);
    
    printf("Valor total recebido dos passageiros: \n");
      scanf("%f", &valor_total);
    
    resultado_litros = num_de_litros * preco_combustivel;
    media_consumo = odometro_resultado / num_de_litros;
    lucro = valor_total - resultado_litros;
    
    printf("Lucro : R$: %.2f\n", lucro);
    printf("média de litros: %.2f/KM", media_consumo);
}