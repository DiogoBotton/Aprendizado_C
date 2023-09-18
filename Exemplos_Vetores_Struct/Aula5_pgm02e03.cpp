/* Este programa é solução dos exercícios 2 e 3 da lista de vetores
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ExibeVetor(int *pVetor, int pTam) {
  int i;
  printf("%5d: ", 0);
  for (i = 0; i < pTam; i++) {
    if (i > 0 && i % 10 == 0) {
      printf("\n");
      printf("%5d: ", i);
    }
    printf("%5d", pVetor[i]);
  }
  printf("\nEste vetor tem %d elementos\n", pTam);
}


int main() {
  int N, i, X;
  int *A;
  bool Achou;
  
  srand(time(NULL));
  printf("Digite N: ");
  scanf("%d", &N);
  A = (int *)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++) {
    A[i] = rand() % 1001;
  }

  printf("\nVetor gerado\n");
  ExibeVetor(A, N);

  printf("\nDigite X: ");
  scanf("%d", &X);
  while (X >= 0) {
    Achou = false;
    for (i = 0; i < N; i++) {
      if (A[i] == X) {
        printf("   encontrado na posicao %d\n", i);
        Achou = true;
      }
    }
    if (!Achou)
      printf("   nao encontrado\n");

    printf("\nDigite X: ");
    scanf("%d", &X);
  }

  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

