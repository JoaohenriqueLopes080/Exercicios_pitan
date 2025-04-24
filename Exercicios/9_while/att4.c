/*Chico tem 1,50m e cresce 2 centímetros por ano,
enquanto Juca tem 1,10m e cresce 3 centímetros por ano.
Faça um programa que calcule e imprima quantos anos
serão necessários para que Juca seja maior que Chico. */

int main() {

    int qntd_anos = 0;
    float tam_chico, tam_juca;
    tam_chico = 1.50;
    tam_juca = 1.10;

    while (tam_chico > tam_juca)
    {
        tam_chico += 0.02;
        tam_juca += 0.03;
        qntd_anos++;
    }
    printf("A quantidade de anos que demorou para juca ser maior é : %d", qntd_anos);
}