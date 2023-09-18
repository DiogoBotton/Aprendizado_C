/* Este programa gera números aleatórios em um vetor e os exibe na tela

   Este código exemplifica o uso de vetor estático 
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int V[25];   // Vetor estático
  int Qtde, i;
  
  srand(time(NULL));
  printf("Digite a Qtde: ");
  scanf("%d", &Qtde);

  for(i = 0; i < Qtde; i++)
    V[i] = rand() % 101;
  for(i = 0; i < Qtde; i++)
    printf("%d: %d\n", i, V[i]);

  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

