/* Este programa gera n�meros aleat�rios em um vetor e os exibe na tela

   Este c�digo exemplifica o uso de vetor din�mico restrito 
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int Qtde, i;
  
  srand(time(NULL));
  printf("Digite a Qtde: ");
  scanf("%d", &Qtde);
  int V[Qtde];         // Vetor din�mico restrito
  
  for(i = 0; i < Qtde; i++)
    V[i] = rand() % 101;
  for(i = 0; i < Qtde; i++)
    printf("%d: %d\n", i, V[i]);

  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

