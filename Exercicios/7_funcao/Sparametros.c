// função sem parametros
/*
// sem retorno
void media(){
    int a, b;
    float m;
    printf("digite 2 valores\n");
   scanf("%d %d", &a, &b);
   m = (float)(a+b)/2;
   printf("media = %.2f\n", m);
   }
   int main(){
    media();
    return 0;
   }
    */
// com retorno 

float media(){
    int a, b;
    float r;
   
   printf("digite 2 valores\n");
   scanf("%d %d", &a, &b);
   r = (float)(a+b)/2;
   return r;
   } 

   int main(){
    float m;
   
    m = media();
    printf("media = %.2f\n", m);
    return 0;
   }
