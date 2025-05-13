#include<stdio.h>

int interseccao(int x0, int y0, int x1, int y1, int x2, int y2,int  x3,int  y3){
    
    if(x1 <= x2 || x3 <= x0 || y1 <= y2 || y3 <= y0){
            printf("0");
    } else {
        printf("1");
    }
}

int main(){
    int x0, y0, x1, y1;
    int x2, y2, x3, y3;

    printf("Digite um valor inteiro para retangulo x0");
    scanf("%d", &x0);

    printf("digite um valor inteiro para retangulo y0");
    scanf("%d", &y0);

    printf("Digite um valor inteiro para retangulo x1");
    scanf("%d", &x1);

    printf("digite um valor inteiro para retangulo y1");
    scanf("%d", &y1);

    printf("Digite um valor inteiro para retangulo x0");
    scanf("%d", &x2);

    printf("digite um valor inteiro para retangulo y0");
    scanf("%d", &y2);

    printf("Digite um valor inteiro para retangulo x1");
    scanf("%d", &x3);

    printf("digite um valor inteiro para retangulo y1");
    scanf("%d", &y3);

    interseccao(x0, y0, x1, y1, x2 , y2, x3, y3);
    return 0;
}

/* IA,
#include<stdio.h>

// Função que verifica interseção e imprime apenas 1 (há interseção) ou 0 (não há interseção)
void interseccao(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3) {
    if (x1 <= x2 || x3 <= x0 || y1 <= y2 || y3 <= y0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
}

int main() {
    int x0, y0, x1, y1;
    int x2, y2, x3, y3;

    // Leitura dos dois retângulos
    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    scanf("%d %d %d %d", &x2, &y2, &x3, &y3);

    interseccao(x0, y0, x1, y1, x2, y2, x3, y3);
    return 0;
}

*/