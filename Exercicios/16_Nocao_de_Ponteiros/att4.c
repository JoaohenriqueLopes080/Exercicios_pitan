int main( ){
  int i, k, *pi, *pk;      // Declara as variáveis inteiras i, k e os ponteiros pi, pk
  i = 2;                   // i recebe 2
  k = 0;                   // k recebe 0
  puts ("Qual sera o valor de k? "); // Imprime a mensagem

  pk = &k;                 // pk aponta para k
  pi = &i;                 // pi aponta para i

  *pk = i--;               // O valor apontado por pk (ou seja, k) recebe i, depois i é decrementado
  printf ("para *pk = i, temos k = %d\n", k);  

  k = *pi;                 // k recebe o valor apontado por pi (ou seja, o valor atual de i)
  printf ("para k = *pi, temos k = %d\n", k);  
}