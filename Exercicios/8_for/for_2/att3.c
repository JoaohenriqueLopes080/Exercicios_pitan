/*Faça um programa que leia um número inteiro e positivo.
A seguir, chame uma função que receba esse número e
verifique se o mesmo é triangular, retornando essa
informação à função main, que irá imprimir uma
mensagem adequada. Um número é dito triangular
quando é resultado do produto de 3 números
consecutivos. (ex.: 24 é triangular, pois 24 = 2*3*4)*/


int triangulo(int n){
    int verificador = 0;
    int i = 0;

    for(i = 1;i * (i + 1) * (i + 2) <= num; i++) {
        if (i * (i + 1) * (i + 2) == num)
        {
           return 1;
        }
    }
    return 0;
}

int main() {

    int valor_func, n;

    printf("Digite o numero que verificaremos se é triangular :");
    scanf("%d", &n);

    valor_func = triangulo(n);

    if(valor_func == 1){
        printf("É trianguar");
    } else {
        printf("Não é triangular:");
    }
  
    
    

}