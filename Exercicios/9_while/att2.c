/*Faça um programa que leia um número indeterminado de
duplas m e n, todos inteiros e positivos, uma dupla de cada
vez. Para cada dupla lida, o programa deve chamar uma
função que receba m e n e calcule a soma dos n inteiros
consecutivos a partir de m inclusive. Ao final, a função deve
retornar o valor da soma para a função main, que irá
imprimi-la. (ex.: para m = 2 e n = 4, a função irá calcular
2+3+4+5)
*/

int sum(int m, int n){

    int i = 0, soma = 0;
    
    for(i = 0; i < n;i++){

        soma += (m + i);
    
    }
    return soma;
}

int main(){
    int m = 0, n = 0, soma1;

while (m > 0 && n > 0)
{
    printf("digite um numero de m");
    scanf("%d", &m);

    printf("digite um numero de n");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
         break;
    }

    soma1 = sum(m,n);
    printf("A Soma é : %d", soma1);
    return 0; 
    }
}