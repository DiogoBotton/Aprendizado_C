/* Este programa define, preenche e exibe um struct
--------------------------------------------------------------------------- */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Dados {
  int A, B;
  double X, Y;
  char C;
};

int main() {
  Dados M, N;
  
  M.A = 39;
  M.B = 127;
  M.X = 317.6;
  M.Y = M.X / M.A;
  M.C = 'p';
  
  printf("\n\nstruct M\n");
  printf("M.A = %d\n", M.A);
  printf("M.B = %d\n", M.B);
  printf("M.X = %lf\n", M.X);
  printf("M.Y = %lf\n", M.Y);
  printf("M.C = %c\n", M.C);
  
  N = M;
  printf("\n\nstruct N\n");
  printf("N.A = %d\n", N.A);
  printf("N.B = %d\n", N.B);
  printf("N.X = %lf\n", N.X);
  printf("N.Y = %lf\n", N.Y);
  printf("N.C = %c\n", N.C);


  printf("\n\nFim do Programa\n");
  system("pause");
  return 0;
}

