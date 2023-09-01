// Apoio: https://www.youtube.com/watch?v=RYB7NNISrYY
// Inputar 10 nomes e exibi-los em ordem alfabética
#include <stdio.h>
#include <string.h>

// Lista de nomes
// 1° colchete: array com 10 de espaço
// 2° colchete: cada nome com espaço de 80 caracteres
char names[10][80];

// Função que irá ordenar os nomes
void order(){
    char aux[80];
    for(int x = 0; x < 10; x++){
        for (int y = x+1; y < 10; y++)
        {
            // Função strcmp compara strings baseado na tabela ASCII
            if(strcmp(names[x], names[y]) > 0){
                // Copia nome menor para variável auxiliar
                strcpy(aux, names[y]);

                // Coloca nome maior no y (um índice a frente)
                strcpy(names[y], names[x]);

                // Coloca y um índice atrás (se encontra na variável auxiliar)
                strcpy(names[x], aux);
            }
        }
        
    }
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° nome: ", i+1);
        scanf("%s", names[i]);
    }
    
    // Executa função order
    order();

    int cont = 0;
    while (cont < 10)
    {
        printf("%s\n", names[cont]);
        //cont += 1;
        //cont = cont + 1;
        cont++;
    }

    return 0;
}