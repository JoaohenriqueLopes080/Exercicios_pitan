#include<Stdio.h>

int main() { 
    int qntd_carros;
    float terco_carros, valor_terco_mensal, decimo_carros, mes, faturamento_anual_terco, faturamento_anual_multa, valor_diaria, valor_multa, horario_devolucao, horario_definido;
    
    
    printf("digite a quantidade de carros : \n");
      scanf("%d", &qntd_carros);
    
    printf("digite o valor da diária: \n");
      scanf("%f", &valor_diaria);
   
    // calculo para valor de terço de carros anualmente 
    terco_carros = qntd_carros / 3;
    valor_terco_mensal = terco_carros * valor_diaria;
    faturamento_anual_terco = valor_terco_mensal * 12;
    
    // calculo para multa e decimo de carros
   printf("Horario definido para devolução do carro : \n");
    scanf("%f", &horario_definido);
    
   printf("horario de devolucao do carro : \n");
     scanf("%f", horario_devolucao);
     
    
    
    

    printf("Faturamento Anual : %f\n", faturamento_anual_terco);
    printf("Faturamento Anual C/Multa : %f\n ", faturamento_anual_multa);
       
       
       
}