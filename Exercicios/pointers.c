#include <stdio.h>

// Função somaUm acrescenta +1 ao número passado no paramêtro
// Esta função recebe um paramêtro que corresponde a um ponteiro que "aponta" para um endereço de memória de uma variável do tipo inteiro
// Recebe um ponteiro para um número inteiro
void somaUm(int* num){
    // Adquire o valor dentro do endereço de memória com asterisco *
    //*num = *num + 1;

    // Nesse caso, necessário acrescentar parenteses, para antes de fazer a soma, adquirir o valor da variável antes
    (*num)++;

    // Exibe o endereço de memória da variável
    printf("Endereço de memória %d\n", num);
}

int main(){
    int numA;

    // O & (e comercial) serve para pegar o endereço de memória da variável
    scanf("%d", &numA);
    
    // Envia o endereço de memória da variável numA
    somaUm(&numA);

    // Exibe o novo valor de numA
    printf("Valor somado %d\n", numA);
}

// Exercício:
// Escreva uma função "soma" que recebe um ponteiro de inteiro num e mais dois inteiros a e b. A função deve calcular a soma de a+b em num.