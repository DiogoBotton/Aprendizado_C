#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int foo(int value) {
    // Variaveis static (estáticas) podem ser vistas por todo o projeto (são como variáveis globais)
    // Quando são editadas uma vez, seu valor é armazenado em memória mesmo que a variável seja declarada novamente
    static int foobar;
    if (foobar == 0)
        foobar = value;
    return foobar;
}

int *bar(int value) {
    int foobar;
    int foobar2;
    value = 56;
    foobar = 56;
    printf("bar %p\n", &foobar);
    printf("bar %p\n", &foobar2);
    printf("bar %p\n", &value);

    // Não recomendado retornar endereço de memória se a mesma será temporaria
    return (&foobar);
}

int bar2(int value) {
    int banana;
    int banana2;
    printf("bar2 %d\n", banana);
    printf("bar2 %p\n", &banana);
    printf("bar2 %p\n", &banana2);
    return (*bar(value));
}

void passarPorReferencia(int *value) {
    *value = 42;
}

int main(void) {
    // Obs: - char ocupa 1 byte de espaço na memória
    //      - int ocupa 4 bytes de espaço na memória

    // Declarando ponteiros
    char *bananinha;
    static char *bananinha2 = "General Kenobi";
    static char *bananinha3;
    int number;
    int *number2;
    char *generalKenobi;

    passarPorReferencia(&number);
    printf("Novo number: %d\n", number);
    generalKenobi = malloc(42 * sizeof(generalKenobi));
    
    // Aloca o máximo de memória possível (irá dar erro, não é recomendado fazer isto)
    // generalKenobi = malloc(-1);
    
    // Malloc retorna NULL em caso de não conseguir alocar memória
    if (generalKenobi == NULL)
    {
        // Perror retorna um erro customizado e, logo em seguida, uma string com o erro gerado pelo próprio compilador
        // No caso: "Cannot allocate memory"
        perror("Falha ao alocar memória");
        return (0);
    }
    strncpy(generalKenobi, bananinha2, 42);
    printf("%p\n", generalKenobi);
    printf("%s\n", generalKenobi);

    // Libera a memória alocada
    free(generalKenobi);

    // Uma string é IMUTÁVEL, ou seja, não é possível alterar um índice do array de chars (char string[])
    // Não é possível:
    // bananinha[0] = "A";
    // O que é possível: (pois atribui um novo valor à variável)
    // bananinha = "Alou";
    // Apoio: https://learn.microsoft.com/pt-br/dotnet/csharp/programming-guide/strings/#immutability-of-strings
    bananinha = "Hello There";

    printf("%p\n", bananinha);
    printf("%p\n", &bananinha);
    printf("%p\n", bananinha2);
    printf("%p\n", &bananinha2);
    printf("%p\n", &bananinha3);
    printf("%d\n", foo(42));
    printf("%d\n", foo(33));
    printf("###########\n");
    number = 42;
    printf("main %p\n", &number);
    
    /*
    Abaixo acontece um problema: 
    Quando uma função retorna o endereço de memória de uma variável criada dentro dela (ou seja, uma variável temporária)
    e armazena este endereço em uma outra variável, quando esta é editada e, logo em seguida chamada outra função, pode acontecer das variáveis declaradas
    dentro desta outra função venha com o valor da atribuição anterior mesmo que os nomes das variáveis sejam diferentes.

    Este problema acontece pq é atribuído um valor ao mesmo endereço de memória que é utilizado para armazenar dados temporários.
    */
    
    // Função bar que retorna um endereço de memória e armazena-o na number2
    number2 = bar(number);
    printf("###########\n");

    // Atribuí um valor ao number2 que contem o mesmo endereço de memória (temporário) utilizado na função bar
    *number2 = 78;

    // Está função ao invés de mostrar o valor de uma variável dentro de bar2, mostra o valor atribuído ao number2
    bar2(number);
    return (0);
}