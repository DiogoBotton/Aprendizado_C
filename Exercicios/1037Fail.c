// Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

// O símbolo ( representa "maior que". Por exemplo: 
// [0,25]  indica valores entre 0 e 25.0000, inclusive eles. 
// (25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Matriz
    int intervals[4][2] = {
        {0,25},
        {25,50},
        {50,75},
        {75,100}
    };

    float num = 0;

    scanf("%f", &num);

    if(num < 0 || num > 100){
        printf("Fora de intervalo\n");
        exit(1);
    }

    int intervalsLenX = sizeof(intervals) / sizeof(intervals[0]);
    int intervalsLenY = sizeof(intervals[0]) / sizeof(intervals[0][0]);

    int actualInterval[1]; 

    for (int x = 0; x < intervalsLenX; x++)
    {
        for (int y = 0; y < intervalsLenY; y++)
        {
            if(num > intervals[x][y] && num <= intervals[x][y+1]){
                actualInterval[0] = intervals[x][y];
                actualInterval[1] = intervals[x][y+1];
                // Break faz o código parar o loop de repetição e segue o código seguinte após ele
                break;
            }
        }
    }

    char character[2]; 
    
    // Operador condicional ternário para decidir se código usará parenteses ou colchetes
    // (cpy == copy) strcpy 1° paramêtro é a variável que será atribuida, o 2° paramêtro será o valor
    num > actualInterval[0] ? strcpy(character, "(") : strcpy(character, "[");
    
    printf("Intervalo %s%d,%d]\n", character, actualInterval[0], actualInterval[1]);
}