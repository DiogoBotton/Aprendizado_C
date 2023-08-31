#include <stdio.h>
#include <math.h>

// Executar com: gcc 1011.c -o 1011 -lm
 
int main() {
    double pi = 3.14159;
    double radius = 0;
    
    // Double colocar %lf no scanf
    printf("Digite um valor que será o raio de uma esfera:\n");
    scanf("%lf", &radius);
    
    double result = (4 * pi * pow(radius, 3)) / 3.0;
    
    // .3 para limitar as casas decimais a apenas uma precisão de 3 digitos após a vírgula
    printf("Volume da = esfera: %.3lf\n", result);
    
    return 0;
}