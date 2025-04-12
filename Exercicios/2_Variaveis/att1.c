/* 
#include <stdio.h>

int main(){

		Resolução 1
    int x;
    x = 10;
    printf("The Variable X Has The Value of = %d\n ",x);
    
     return 0;
}
    */
   
    // Resolução 2
    
    #include <stdio.h> 
int main() {
    int x;
    printf("digite um numero inteiro: (0 a 9)\n");
    scanf("%d", &x);
    printf("o numero digitado foi: %d\n", x);
}