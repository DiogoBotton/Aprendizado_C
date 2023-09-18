/* Este programa gera números aleatórios em um vetor e os exibe na tela

   Este código exemplifica o uso de vetor dinâmico com realocação
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>

int main() {
  int *V, x;
  int Tam, i;
  
  Tam = 0;
  V = NULL;
  printf("Digite um inteiro: ");
  scanf("%d", &x);
  while(x != 0) {
    Tam++;
    V = (int *)realloc(V, sizeof(int) * Tam);   // Re-alocação de memória para V
    V[Tam-1] = x;

    printf("\n");
    for(i = 0; i < Tam; i++)
      printf("%d, ", V[i]);
    printf("\n");
    
    printf("Digite um inteiro: ");
    scanf("%d", &x);
  }
  

  free(V);
  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

