/* Este programa gera n�meros aleat�rios em um vetor e os exibe na tela

   Este c�digo exemplifica o uso de vetor din�mico amplo
   Adicionalmente, este pgm tamb�m grava a sa�da em disco
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int *V;  // O Vetor din�mico amplo � um ponteiro
  int Qtde, i;
  FILE *Arq;
  
  Arq = fopen("saida.txt", "w");
  
  srand(time(NULL));
  printf("Digite a Qtde: ");
  scanf("%d", &Qtde);
  
  // Aloca��o de mem�ria para V
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

