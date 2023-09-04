#include <stdio.h>
#include <string.h>

// Função para verificar intervalo
int verifyInterval(float number){
    int inter[2];

    // Alocar espaço necessário para os caracteres que serão atribuídos a esta variável
    char txt[9];

    if(number >= 0 && number <= 25){
        inter[0] = 0;
        inter[1] = 25;
        strcpy(txt, "[0,25]");
    } else if (number > 25 && number <= 50) {
        inter[0] = 25;
        inter[1] = 50;
        strcpy(txt, "(25,50]");
    } else if (number > 50 && number <= 75) {
        inter[0] = 50;
        inter[1] = 75;
        strcpy(txt, "(50,75]");
    } else if (number > 75 && number <= 100) {
        inter[0] = 75;
        inter[1] = 100;
        strcpy(txt, "(75,100]");
    } else {
        printf("Fora de intervalo\n");
        return 0;
    }

    printf("Intervalo %s\n", txt);
    return 0;
}

int main() {
    float num = 0;

    scanf("%f", &num);

    verifyInterval(num);
}
