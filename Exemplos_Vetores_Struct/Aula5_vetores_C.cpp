/* Este programa gera números aleatórios em um vetor e os exibe na tela

   Este código exemplifica o uso de vetor dinâmico amplo
   Adicionalmente, este pgm também grava a saída em disco
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int *V;  // O Vetor dinâmico amplo é um ponteiro
  int Qtde, i;
  FILE *Arq;
  
  Arq = fopen("saida.txt", "w");
  
  srand(time(NULL));
  printf("Digite a Qtde: ");
  scanf("%d", &Qtde);
  
  // Alocação de memória para V
  V = (int *)malloc(sizeof(int) * Qtde);  
  
  for(i = 0; i < Qtde; i++)
    V[i] = rand() % 101;
  for(i = 0; i < Qtde; i++) {
    printf("%d: %d\n", i, V[i]);
    fprintf(Arq, "%d: %d\n", i, V[i]);
  }

  fclose(Arq);
  free(V);
  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

