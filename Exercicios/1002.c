#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159;
    double radius = 0;

    printf("Digite o valor do raio:\n");
    scanf("%lf", &radius);
    
    double result = pi*pow(radius, 2);
    
    printf("A=%.4lf\n", result);
 
    return 0;
}