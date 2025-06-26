#include <stdio.h>

int main() {
  int x, y, *px, *py;
  x = 5;           // x recebe 5
  px = &x;         // px aponta para x
  py = px;         // py também aponta para x
  y = (*py)--;     // y recebe o valor apontado por py (5), depois decrementa x para 4
  printf("%d %d", x, y); // imprime os valores de x e y
}

