#include <stdio.h>

int main() {
        float largura_terreno, area_terreno, comprimento_terreno, perimetro_terreno;
        float largura_casa, area_casa, comprimento_casa, perimetro_casa;
        float arealivre;

        printf("Digite o comprimento do terreno");
        scanf("%f", &comprimento_terreno);

        printf("digite a Largura do Terreno:");
        scanf("%f", &largura_terreno);

        printf("Digite o comprimento do terreno Da Casa");
        scanf("%f", &comprimento_casa);

        printf("digite a Largura do Terreno Da Casa:");
        scanf("%f", &largura_casa);


        area_terreno = comprimento_terreno * largura_terreno;
        area_casa = comprimento_casa * largura_casa;

        arealivre = area_terreno - area_casa;

        printf("Area Da Cerreno", area_terreno);
        printf("Area Da Casa", area_casa);
        printf("Area Livre", arealivre);
}