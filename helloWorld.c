/*
Para executar o arquivo C:

1- Abrir terminal WSL
2- gcc helloWorld.c -o hello (gcc [source] -o [outputFileName])
3- ./hello (./[outputFileName])

*/

#include <stdio.h>

int main()
{
    char nome[20] = "";
    char sobrenome[20] = "";
    int idade = 0;

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite seu sobrenome:\n");
    scanf(" %s", sobrenome);

    // Sempre que necessitar a leitura de um número, colocar o "&" na frente da variável (ponteiros)
    printf("Digite sua idade:\n");
    scanf(" %d", &idade);

    printf("Welcome to bizarre world of C %s %s.\n You are %d years old.\n", nome, sobrenome, idade);
    return 0;
}