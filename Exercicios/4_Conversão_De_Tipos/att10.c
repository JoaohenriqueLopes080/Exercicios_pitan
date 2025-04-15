#include<Stdio.h>

int main() { 
    float qntd_carros;
    float qntd_finaldeano, um_oitavocarros, carros_5porcento, terco_carros, valor_terco_mensal, decimo_carros, faturamento_anual_terco, faturamento_mensal_multa, valor_diaria, valor_multa;
    
    
    printf("digite a quantidade de carros : \n");
      scanf("%f", &qntd_carros);
    
    printf("digite o valor da diária: \n");
      scanf("%f", &valor_diaria);
   
    // calculo para valor de terço de carros anualmente 
    terco_carros = qntd_carros / 3;
    valor_terco_mensal = terco_carros * valor_diaria;
    faturamento_anual_terco = valor_terco_mensal * 12;
    
    // calulo para a multa mensal.
    valor_multa = valor_diaria * 0.10;
    decimo_carros = qntd_carros / 10;
    faturamento_mensal_multa = decimo_carros * valor_multa;
  
    // calculo para a quantidade de carros no final do ano.
    carros_5porcento = qntd_carros * 0.05;
    um_oitavocarros = qntd_carros / 8;
    qntd_finaldeano = qntd_carros - carros_5porcento + um_oitavocarros;
    

    printf("Faturamento Anual : %f\n", faturamento_anual_terco);
    printf("Faturamento Mensal C/Multa : %f\n ", faturamento_mensal_multa);
    printf("Quantidade de Carros no Final do Ano : %f\n", qntd_finaldeano);
       
}