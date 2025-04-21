/*) Utilize o comando switch e o tipo ‘char’ para fazer um programa que calcula
as áreas das seguintes figuras geométricas:
 ‘q’ - Área do quadrado
 ‘r’ - Área do retângulo
 ‘t’ - Área do triângulo
 ‘p’ - Área trapézio
Baseado na escolha do usuário, você deverá ler os valores necessários para fazer
os cálculos, imprimir o nome da figura escolhida e o valor da área. As opções de
figuras geométricas devem estar dispostas em um switch e cada uma delas
implementada por uma função. Cada função irá fazer a leitura da entrada e a
impressão do resultado. */

#include<stdio.h>
#include<math.h>

float calculo_switch(char operacao){
    float lado, area, base, altura, base_maior, base_menor;
    switch (operacao)
    {
    case 'q':
        // Área do quadrado
        printf("Me diga o comprimento de um dos lados");
        scanf("%f", &lado);
        area = lado * lado;
        printf("A área do quadrado é %f", area);
        break;

    case 'r':
        // Área do retângulo
        printf("Me diga o tamanho da base:");
        scanf("%f", &base);

        printf("Me diga a altura");
        scanf("%f", &altura);
        area = base * altura;
        printf("A área do retângulo é %f", area);
        break;

    case 't':
        // Área do triângulo
        printf("Me diga o tamanho da base:");
        scanf("%f", &base);

        printf("Me diga a altura");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("A área do triângulo é %f", area);
        break;

    case 'p':
        // Área do trapézio
        printf("Me diga o tamanho da base maior:");
        scanf("%f", &base_maior);

        printf("Me diga o tamanho da base menor:");
        scanf("%f", &base_menor);

        printf("Me diga a altura");
        scanf("%f", &altura);
        area = ((base_maior + base_menor)* altura) / 2;
        printf("A área do trapézio é %f", area);
        break;
    default: printf("tem algo de errado, escreva direito.");
        break;
    }
    return area;
}

int main() {
    float valor_funcao;
    char operacao;

    printf("Digite a operação que você quer: \n'q' - Área do quadrado\n'r' - Área do retângulo\n't' - Área do triângulo\n'p' - Área do trapézio\n");
    scanf("%c", operacao);
    valor_funcao = calculo_switch(operacao);
    printf("%f", valor_funcao);
}