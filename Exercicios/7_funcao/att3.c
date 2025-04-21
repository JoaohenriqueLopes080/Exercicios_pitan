#include<stdio.h>
#include<math.h>

float calculo_horas(horas, minutos, horas_saida, minutos_saida){

    float preco_total;

    int horas_totais = horas_saida - horas;
    int minutos_totais = minutos_saida - minutos;

    if (minutos_totais < 0) { // se minutos totais é menor que 0  (-)
        minutos_totais += 60; // minutos totais igual + 0 ate 60 - vira positivo
        horas_totais -= 1; // horas totais perde 1 hora
    }

    if (horas_totais < 0) { // se horas totais é negativo
        horas_totais += 24; // torna horas totais em positivo
    }

    if(horas_totais == 1 || horas_totais == 2){
        preco_total = horas_totais * 1;
    } else 
    { 
        if (horas_totais == 3 || horas_totais == 4)
    {
        preco_total = horas_totais * 1.40;
    }
    }

    if (horas_totais == 5 || horas_totais > 5)
    {
        preco_total = horas_totais * 2;
    }
    
    return preco_total;
}

// função principal.
int main() {
    int horas, minutos, horas_saida, minutos_saida;
    float preco_totalh;

    printf("Digite o momento de chegada (horas minutos)");
    scanf("%d %d", &horas, &minutos);
    
    printf("digite o momento de saida(horas minutos)");
    scanf("%d %d", &horas_saida, &minutos_saida);
    
   preco_totalh = calculo_horas(horas, minutos, horas_saida, minutos_saida);
   printf("Preço total : %f", preco_totalh);

   return 0;
}

