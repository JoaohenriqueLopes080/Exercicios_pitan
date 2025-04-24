/*Faça um programa que leia um número inteiro e positivo.
A seguir, chame uma função que receba esse número e
verifique se o mesmo é triangular, retornando essa
informação à função main, que irá imprimir uma
mensagem adequada. Um número é dito triangular
quando é resultado do produto de 3 números
consecutivos. (ex.: 24 é triangular, pois 24 = 2*3*4)*/
int triangulo(int n) {
    int verificador = 0;
    int i = 0;

    for(i = 1;i * (i + 1) * (i + 2) <= n; i++) {
        if (i * (i + 1) * (i + 2) == n)
        {
           return 1;
        }
    }
    return 0;
}

int main() {

    int n, valor_func;

    printf("Digite um numero para verificar se é triangulo");
        scanf("%d", &n);
    while (n > 0)
    {
        valor_func = triangulo(n);
        switch (valor_func)
        {
        case 1:
            printf("É UM TRIANGULO");
            break;
        case 0: 
            printf("Não é um Triangulo");
            break;
        default: 
            printf("deu erro");
            break;
        }

        printf("Digite um numero para verificar se é triangulo");
        scanf("%d", &n);
    }
    


}