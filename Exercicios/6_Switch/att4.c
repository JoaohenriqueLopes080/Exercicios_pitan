/* Leia dois valores inteiros x e y e exiba um menu com as opções: ‘A’, ‘P’
e ‘R’. Para a opção ‘A’, o programa deve calcular e exibir a média aritmética
dos dois valores. Para a opção ‘P’, o programa deve calcular e exibir a
média ponderada dos valores, supondo pesos 4 para x e 6 para y. Para a
opção ‘R’, o programa deve calcular e exibir o resto inteiro da divisão de y
por x. */

#include<stdio.h>

int main(){

    int x, y, px, py, soma;
    char escolha;

    printf(" Escolha \n");
    printf("Opções \n\"A = Media Aritmetica\" \n\"EP = Exemplo Media Ponderada\" \n\"P = Media Ponderada\" \n\"R = Resto da Divisão\"");
    scanf("%c", &escolha);

    switch (escolha)
    {
    case 'A' :
        printf("Digite o Valor de X\n");
        scanf("%d", &x);

        printf("Escolha o Valor De Y\n");
        scanf("%d", &y);

        printf("Media Aritmetica : %d\n", (x + y) / 2);
    break;

    case 'E':
        printf("Peso 4 para X e Peso 6 para Y");
        // multiplica o valor pelo seu peso
        soma = (x * 4) + (y * 6);
    printf("Exemplo de Media Ponderada : %d", (soma / 10));
    break;  

    case 'P':
        printf("Digite o Valor de X\n");
        scanf("%d", &x);

        printf("Escolha o Valor De Y\n");
        scanf("%d", &y);

        printf("Digite o Peso de X\n");
        scanf("%d", &px);
    
        printf("Escolha o Peso de Y\n");
        scanf("%d", &py);
    
        soma = (x * px)+ (y * py);

        printf("Media Ponderada : %d\n", soma / (py + px));
    break;    

    case 'R':
        printf("Digite o Valor de X\n");
        scanf("%d", &x);

        printf("Escolha o Valor De Y\n");
        scanf("%d", &y);

        printf("Resto de Divisão : %d", (x % y));
    break;
      

    default: printf("I.N.V.A.L.I.D.O");
        break;
    }


}