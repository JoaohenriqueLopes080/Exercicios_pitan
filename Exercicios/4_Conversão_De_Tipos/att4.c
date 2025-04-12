#include <stdio.h>

int main() {
    float valor_p_hora, qntd_horas, salario_bruto, salario_liquido;
    float desconto_ir, desconto_inss, desconto_sindical;
    
    printf("Digite o valor por hora de trabalho: \n");
    scanf("%f", &valor_p_hora);
    
    printf("Digite a quantidade de horas trabalhadas no mes: \n");
    scanf("%f", &qntd_horas);
    
    salario_bruto = valor_p_hora * qntd_horas;
    desconto_ir = salario_bruto * 0.11;    // 11% de IR
    desconto_inss = salario_bruto * 0.08;  // 8% de INSS
    desconto_sindical = salario_bruto * 0.05; // 5% de sindical
    salario_liquido = salario_bruto - desconto_ir - desconto_inss - desconto_sindical;
    
    printf("Salario Bruto: %.2f\n", salario_bruto);
    printf("Salario Liquido: %.2f\n", salario_liquido);
    printf("Descontos Aplicados \nIR: %.2f\nINSS: %.2f\nContribuicao Sindical: %.2f\n",
        desconto_ir, desconto_inss, desconto_sindical);
    
    return 0;
}