/*Leia 2 números e um caractere, representando as operações +,
-, * e /. O programa deve imprimir o resultado da operação
efetuada. Teste seu programa com a entrada: 3.6, 4 e ‘/’. A
seguir, teste com 3.2, 0.0 e ‘/’ e corrija seu programa para
imprimir uma mensagem caso não seja possível efetuar um
cálculo.
*/

#include<stdio.h>
#include<math.h>

int main() {

    int num1, num2; 
    char Esc;

    printf("Digite o Primeiro Numero: \n");
    scanf("%d", &num1);

    printf("Digite um valor para a operação | + | - | * | / |");
    scanf(" %c", &Esc);

    printf("Digite o Segundo Numero: \n");
    scanf(" %d", &num2);

    if(Esc == '+') {
        printf("A Soma é %d", num1 + num2);
    } 
        else if(Esc == '-')
    {
        printf("A Subtração é : %d", num1 - num2);
    }
        else if (Esc == '*') 
        {
            printf("A Multiplicação é : %d", num1 * num2);
        }
        else if(Esc == '/') {
            if (num1 == 0 || num2 == 0){
            printf("ERRO, Não é possivel realizar a operação.");
            }
        } else {
            printf("A Divisão é : %d", num1 / num2);
        }
}


