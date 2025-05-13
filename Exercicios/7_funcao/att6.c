#include <stdio.h>
// feito com ia - eu tentei muitas vezes e desisti
char pagina() {
    int altura, largura;
    int f1altura, f1largura, f2altura, f2largura;

    // Leitura dos dados
    scanf("%d %d", &altura, &largura);
    scanf("%d %d", &f1altura, &f1largura);
    scanf("%d %d", &f2altura, &f2largura);

    // Testa todas as combinações possíveis de orientação das fotos
    if (
        //  1 - Ambas em pé
        ((f1altura <= altura && f1largura <= largura) && (f2altura <= altura && f2largura <= largura) && // verifica se duas fotos tem o tamanho dentro da altura e largura.
         ((f1altura + f2altura <= altura && (f1largura > largura || f2largura > largura)) || (f1largura + f2largura <= largura)))
        ||
        // 2 - Foto 1 em pé, foto 2 deitada
        ((f1altura <= altura && f1largura <= largura) && (f2largura <= altura && f2altura <= largura) &&// verifica se duas fotos tem o tamanho dentro da altura e largura.
         ((f1altura + f2largura <= altura && (f1largura > largura || f2altura > largura)) || (f1largura + f2altura <= largura)))
        ||
        // 3 - Foto 1 deitada, foto 2 em pé
        ((f1largura <= altura && f1altura <= largura) && (f2altura <= altura && f2largura <= largura) &&// verifica se duas fotos tem o tamanho dentro da altura e largura.
         ((f1largura + f2altura <= altura && (f1altura > largura || f2largura > largura)) || (f1altura + f2largura <= largura)))
        ||
        // 4 - Ambas deitadas
        ((f1largura <= altura && f1altura <= largura) && (f2largura <= altura && f2altura <= largura) &&// verifica se duas fotos tem o tamanho dentro da altura e largura.
         ((f1largura + f2largura <= altura && (f1altura > largura || f2altura > largura)) || (f1altura + f2altura <= largura)))
    ) {
        return 'S';
    } else {
        return 'N';
    }
}

int main() {
    char resposta = pagina();
    printf("%c\n", resposta);
    return 0;
}