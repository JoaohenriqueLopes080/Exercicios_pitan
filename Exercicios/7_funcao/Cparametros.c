// Função com Parametros

// sem retorno
/*
void media(int x, int y){
    float m;
   m = (float)(x+y)/2;
   printf("media = %.2f\n", m);
   }

   int main(){
    int a, b;
    printf("digite 2 valores\n");
    scanf("%d %d", &a, &b);
    media(a, b);
    return 0;
   }
*/
// com retorno
float media(int x, int y){
    float r;
   r = (float)(x+y)/2;
   return r;
   }

   int main(){
    int a, b;
   float m;
   printf("digite 2 valores\n");
    scanf("%d %d", &a, &b);
    m = media(a, b);
   printf("media = %.2f\n", m);
    return 0;
   }
   