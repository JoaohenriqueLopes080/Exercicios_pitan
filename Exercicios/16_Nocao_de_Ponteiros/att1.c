int main( ){
  int y, *p, x;           // Declara três variáveis: y (inteiro), p (ponteiro para inteiro), x (inteiro)
  y = 0;                  // Atribui 0 para y
  p = &y;                 // p recebe o endereço de y (p aponta para y)
  x = *p;                 // x recebe o valor apontado por p (ou seja, x = y = 0)
  x = 4;                  // x recebe 4 (agora x = 4, y continua 0)
  (*p)++;                 // Incrementa o valor apontado por p (y), então y passa a ser 1
  x--;                    // Decrementa x (x passa de 4 para 3)
  (*p) += x;              // Soma x ao valor apontado por p (y = y + x = 1 + 3 = 4)
  printf ("y = %d\n", y);   // Imprime y (4)
  printf ("x = %d\n", x);   // Imprime x (3)
  printf ("p = %d\n", *p);  // Imprime o valor apontado por p (y, que é 4)
}