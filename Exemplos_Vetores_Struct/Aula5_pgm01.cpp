/* Este programa é solução do exercício 1 da lista de vetores
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ExibeVetor(double *pVetor, int pTam) {
  int i;
  for (i = 0; i < pTam; i++) {
    printf("%.2lf, ", pVetor[i]);
  }
  printf("\nEste vetor tem %d elementos\n", pTam);
}


int main() {
  int N, i;
  double *A, *Pos, *Neg;
  int QtdePos, QtdeNeg;
  
  srand(time(NULL));
  printf("Digite N: ");
  scanf("%d", &N);
  A = (double *)malloc(sizeof(double) * N);
  for (i = 0; i < N; i++) {
    A[i] = rand() % 10000 / 100.0 - 49;
  }

  Pos = NULL;
  Neg = NULL;
  QtdePos = 0;
  QtdeNeg = 0;
  for (i = 0; i < N; i++) {
    if (A[i] >= 0) {
      QtdePos++;
      Pos = (double *)realloc(Pos, sizeof(double) * QtdePos);
      Pos[QtdePos-1] = A[i];
    }
    else {
      QtdeNeg++;
      Neg = (double *)realloc(Neg, sizeof(double) * QtdeNeg);
      Neg[QtdeNeg-1] = A[i];
    }
  }
  
  printf("\nVetor gerado\n");
  ExibeVetor(A, N);

  printf("\nVetor de positivos\n");
  ExibeVetor(Pos, QtdePos);

  printf("\nVetor de negativos\n");
  ExibeVetor(Neg, QtdeNeg);


  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

