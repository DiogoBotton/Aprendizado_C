#include <stdio.h>

int main(){
    int numMax;
    int auxiliar = 0;
    int numBack = 0;
    int numNext = 0;

    scanf("%d", &numMax);

    int cont = 0;
    while (cont < numMax)
    {
        // Soma valor anterior com o próximo
        auxiliar = numBack + numNext;
        
        if(cont > 1)
            numBack = numNext;

        numNext = auxiliar;

        printf("%d ", auxiliar);

        if(cont == 0)
            numNext++;
        
        cont++;
    }
    
    return 0;
}