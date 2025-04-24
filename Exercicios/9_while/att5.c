/*Faça um programa que leia um número inteiro N e chame
uma função passando N como parâmetro. A função deve
verificar se N é um quadrado perfeito, informando sua raiz,
calculada através da soma de ímpares. Um número é um
quadrado perfeito se for possível somarmos números
ímpares consecutivos (1+3+5+7+...) até que esta soma
seja igual ao próprio número. Neste caso, a quantidade de
termos somados é a raiz quadrada deste número. (ex. 16
= 1+3+5+7. Foram somados 4 termos, que é a raiz
quadrada de 16).*/

int quadrado(int n){
    int verificador = 0; 
    int i = 0, termos; 
    int soma = 0; 
    for (i = 0; i < n; i++) 
    {
        soma += ((2 * i) + 1);  
        if (soma == n) 
        {
            verificador = 1; 
            
            break;
        }
        if (soma > n) 
        {
            verificador = 0;
            break;
        }
    }
    return verificador; 
}

int main() {

    int n, valor_func;

    printf("Digite o valor de N : ");
    scanf("%d", &n);

    while (n > 0)
    {
       valor_func = quadrado(n)

       if (valor_func == 1)
       {
        printf("é um quadrado perfeito");
       } else {
        printf("Não é um quaddrado perfeito.");
       }

        printf("Digite o valor de N : ");
        scanf("%d", &n);
    }
    
    
}