    #include <stdio.h>

    int main() {

        float formula;
        char identificador, altura;

        printf("Qual seu genero?\n ");
        scanf("%c", &identificador);

        printf("Qual sua altura?\n");
        scanf("%f", &altura);

        switch (identificador)
        {
        case 'M':
            formula = (altura - 100) * -0.9; 
            printf("Seu Peso ideal é : %f", formula);
            break;
        case 'F':
            formula = (altura - 100) * 0.85;
            printf("Seu Peso ideal é : %f", formula);
        default:
            break;
        }
    }