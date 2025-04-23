/*Gere e imprima os N primeiros termos da série de Fibonacci, sendo
N um valor fornecido pelo usuário. Obs.: os dois primeiros termos
desta série são 0 e 1. Os demais são gerados a partir da soma dos
anteriores.
Ex.: 0+1 = 1 → terceiro termo; 1+1 = 2 → quarto termo;
1+2=3→ quinto termo; ... */


int main() {

    int i,n_termos, termo1, termo2, fibo;

    termo1 = 0;
    termo2 = 1;

     printf("Digite o valor de N Termos :\n");
     scanf("%d", &n_termos);

    if(n_termos <= 0){
        printf("Numero de Termos Invalido MLK.");
    }

     if(n_termos >= 1){  
        printf("Primeiro termo: %d\n", termo1);
    } 
     if (n_termos >= 2)
    {
        printf("Primeiro termo:  %d\n", termo1);
        printf("Segundo termo: %d\n", termo2);
    }
    for (i = 3; i <= n_termos; i++)
    {       
        fibo = termo1 + termo2; // novo valor de fibo é termo1 + termo 2
        printf("TERMO %d: %d", i, fibo);
        termo1 = termo2; // termo1 = ganha o valor do termo 2
        termo2 = fibo; // termo2 ganha o valor atual de fibo, que depois se torna fibo 1
    }
    

    
    



}