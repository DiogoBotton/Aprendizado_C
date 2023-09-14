#include <stdio.h>

int main(){
    int min,max;
    int resultado = 0;

    scanf("%d", &min);
    scanf("%d", &max);

    for (int i = min; i <= max; i++)
    {
        if(i % 13 != 0)
            resultado += i;
    }
    
    printf("%d\n", resultado);

    return 0;
}