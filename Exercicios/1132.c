#include <stdio.h>

int main(){
    int x,y;
    int resultado = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    // Número x é maior que y? Se sim retorna x, do contrário retorna y
    int numMax = x >= y ? x : y;

    // Número x é menor que y? Se sim retorna x, do contrário retorna y
    int numMin = x < y ? x : y; 

    for (int i = numMin; i <= numMax; i++)
    {
        if(i % 13 != 0)
            resultado += i;
    }
    
    printf("%d\n", resultado);

    return 0;
}