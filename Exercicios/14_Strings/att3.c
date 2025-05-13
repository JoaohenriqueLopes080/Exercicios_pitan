/*Faça uma função booleana que receba uma string e identifique se ela
é um palíndromo (ex: “RADAR” e “SAIAS” são palíndromos).*/

#include<stdio.h>

int main() {
    char string[10]; // Tam 10 
    int i = 0, j = 0; // indices
    int palindromo = 1; // verificar se é palindromo

    printf("Digite uma string: ");
    scanf("%s", string); //leitura de dados da string

    // Encontrar o comprimento da string
    while (string[j] != '\0') { // laco de repeticao j ate o final da palavra
        j++; // incrementa j a cada iteração
    }
    j--;

    // Verificar se a string é um palíndromo
    while (i < j) { // laco de repeticao i
        if (string[i] != string[j]) {  // compara os caracteres
            palindromo = 0; // se não forem iguais, não é palíndromo
            break; 
        }
        //incrementa i e decrementa j; 
        // j ja vai para o final da string
        // i vai para o começo
        // um aumenta e o outro diminui
        i++;
        j--;
    }

    if (palindromo) {
        printf("A string '%s' é um palíndromo.\n", string);
    } else {
        printf("A string '%s' não é um palíndromo.\n", string);
    }

    return 0;
}