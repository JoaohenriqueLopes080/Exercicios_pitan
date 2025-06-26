int main( ){
  int x, y, *px, *py;
  printf ("Digite um valor: ");
  scanf ("%d", &x);        // Lê um valor e armazena em x
  px = &x;                 // px aponta para x
  y = *px;                 // y recebe o valor apontado por px (ou seja, x)
  printf ("x = %d e y = %d\n", x, y);  // Mostra x e y
  *px = 8;                 // Altera o valor de x para 8 usando o ponteiro px
  py = px;                 // py aponta para o mesmo lugar que px (ou seja, x)
  printf ("x = %d e y = %d\n", x, y);  // Mostra x e y novamente
  *py = 9;                 // Altera o valor de x para 9 usando o ponteiro py
  printf ("x = %d e y = %d\n", x, y);  // Mostra x e y novamente
}