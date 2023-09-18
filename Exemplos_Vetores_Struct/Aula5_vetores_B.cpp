/* Este programa gera números aleatórios em um vetor e os exibe na tela

   Este código exemplifica o uso de vetor dinâmico restrito 
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int Qtde, i;
  
  srand(time(NULL));
  printf("Digite a Qtde: ");
  scanf("%d", &Qtde);
  int V[Qtde];         // Vetor dinâmico restrito
  
  for(i = 0; i < Qtde; i++)
    V[i] = rand() % 101;
  for(i = 0; i < Qtde; i++)
    printf("%d: %d\n", i, V[i]);

  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

