/*Faça um programa que chame uma função que leia um número
correspondente ao mês atual e 4 dígitos da placa de um veículo. Através do
número finalizador da placa (algarismo da casa das unidades) determine e
informe quando vence o IPVA do veículo

final_placa / mes 
1   - janeiro
2   - fevereiro
3   - março
4   - abril
5   - maio
6   - junho
7   - julho
8   - agosto
9   - setembro
10  - outubro
*/
#include<stdio.h>
#include<math.h>

void mes_atual(digitofinal) {
    int mes;
    switch (digitofinal)
    {
    case 1:
        printf("Mes - Janeiro\n");
        break;
    case 2:
        printf("Mes - Fevereiro\n");
        break;
    case 3:
        printf("Mes - Março\n");
        break;
    case 4:
        printf("Mes - Abril\n");
        break;
    case 5:
        printf("Mes - Maio\n");
        break;
    case 6:
        printf("Mes - Junho\n");
        break;
    case 7:
        printf("Mes - Julho\n");
        break;
    case 8:
        printf("Mes - Agosto\n");
        break;
    case 9:
        printf("Mes - Setembro\n");
        break;
    case 10:
        printf("Mes - Outubro\n");
        break;
    default:
        break;
    }
    return mes;
}

int placa_final(placa) {

    int digitofinal;
    digitofinal = placa % 10;

    return digitofinal;
}

int main(){

    int placa, digitofinal;

    printf("Digite os ultimos 4 digitos da sua placa");
    scanf("%d", &placa);
    digitofinal = placa_final(placa);

    printf("o mes de vencimento é em:");
    mes_atual(digitofinal);

    return 0;
}

