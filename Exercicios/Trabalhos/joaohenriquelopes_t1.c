#include <stdio.h>


int main(){
  
    long int ri;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9;
    int div1,div2;
    int sa,sb;

    printf("digite o Numero Ri :");
        scanf("%ld", &ri);

    a1 = (ri / 100000000) % 10;
    a2 = (ri / 10000000) % 10;
    a3 = (ri / 1000000) % 10;
    a4 = (ri / 100000) % 10;
    a5 = (ri / 10000) % 10;
    a6 = (ri / 1000) % 10;
    a7 = (ri / 100) % 10;
    a8 = (ri / 10) % 10;
    a9 = ri % 10;


    sa = a1 * 1 + a2 * 2 + a3 * 3 + a4 * 4 + a5 * 5 + a6 * 6 + a7 * 7 + a8 * 8 + a9 * 9;
    div1 = sa % 11;
    if (div1 == 10) {
        div1 = 0;
    }

    sb = a1 * 0 + a2 * 1 + a3 * 2 + a4 * 3 + a5 * 4 + a6 * 5 + a7 * 6 + a8 * 7 + a9 * 8 + div1 * 9;
    div2 = sb % 11;
    if (div2 == 10) {
        div2 = 0;
    }

    printf("O RI é : %ld/n %d%d", ri, div1, div2);

    return 0;
}