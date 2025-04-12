#include <stdio.h>

    int main () {

        char nome[50];

        printf("digite seu primeiro nome: ");
        scanf("%s", nome);

        printf("seu nome é: \n\"%s\"",  nome );

        return 0;
    }

        //Resolução em video
        /* 
        #include <stdio.h>

					int main() {
					    char a;
					    printf("digite uma palavra: \n");
					    scanf("%c", &a);
					    printf("%c", a);
					    printf("'%c'", a);
					}
        */