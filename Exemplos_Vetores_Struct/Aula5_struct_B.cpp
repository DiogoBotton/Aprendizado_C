/* Este programa define, preenche e exibe um struct
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct TDados {
  int X;
  int Y;
  int raio;
  int cor;
};

int randint(int ini, int fim) {
  int r;
  r = ini + rand() % (fim - ini + 1);
  return r;
}

int main() {
  TDados inimigos[10];
  int Qtde, i;
  
  srand(time(NULL));
  
  printf("Digite a qtde: ");
  scanf("%d", &Qtde);
  //inimigos = (TDados *)malloc(sizeof(TDados) * Qtde);
  
  for(i = 0; i < Qtde; i++) {
    inimigos[i].X = rand() % 600;
    inimigos[i].Y = rand() % 400;
    inimigos[i].raio = randint(5, 20);
    inimigos[i].cor = rand() * rand();
  }

  printf("\nVetor de struct gerado:\n");
  for(i = 0; i < Qtde; i++) {
    printf("  elemento %d\n", i);
    printf("    campo X    = %d\n", inimigos[i].X);
    printf("    campo Y    = %d\n", inimigos[i].Y);
    printf("    campo raio = %d\n", inimigos[i].raio);
    printf("    campo cor  = %d\n", inimigos[i].cor);
  }

  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

