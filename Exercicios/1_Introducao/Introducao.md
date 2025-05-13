
  ## Introdução ao Laboratório de Programação 13/05/25

  Neste laboratório, vamos explorar os conceitos fundamentais da programação utilizando a linguagem C. O objetivo é desenvolver habilidades práticas na escrita, compreensão e execução de programas, além de promover o raciocínio lógico e a resolução de problemas computacionais.

  ### O que é `printf` em C?

  A função `printf` é utilizada para exibir informações na tela. Ela faz parte da biblioteca padrão de entrada e saída (`stdio.h`). Com `printf`, você pode mostrar textos, valores de variáveis e resultados de operações.

  **Exemplo de uso:**

  ```c
  #include <stdio.h>

  int main() {
    printf("Olá, mundo!\n");
    return 0;
  }
  ```

  No exemplo acima, `printf` imprime a mensagem "Olá, mundo!" seguida de uma quebra de linha (`\n`). Você pode usar especificadores de formato, como `%d` para inteiros ou `%f` para números reais, para mostrar valores de variáveis.

  **Exemplo com variáveis:**

  ```c
  int idade = 20;
  printf("Eu tenho %d anos.\n", idade);
  ```

  Neste caso, `%d` será substituído pelo valor da variável `idade`.