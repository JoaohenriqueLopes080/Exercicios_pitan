#include <stdio.h>

int main() {
    int count = 0;

    while (count < 5) { // enquanto contador for menor que 5
        printf("Count is: %d\n", count); // printa contagem do contador - 1 , 2 , 3 , 4 , 5
        count++; // contador ganha mais 1. e atualiza a variavel.
    }

    return 0;
}