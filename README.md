# Aprendizado_C

* Instalação de ambiente WSL para desenvolvimento em C.

* Utilizado apoio abaixo:
WSL e Ambiente de Desenvolvimento em C
(https://www.youtube.com/watch?v=saRpmduQang)


## Instalação do MinGW:

* Necessário instalação do MinGW para funcionar o Intelisense do VS Code
(https://sourceforge.net/projects/mingw/)

* Instalar VS Code para Linguagem C/C++
(https://www.youtube.com/watch?v=eDzQ6HkmGa4)

-----

### Pointers:

- O **&** "e comercial" é utilizado para referenciar um **endereço de memória** de uma variável.
- O **\*** "asterisco" é utilizado para adquirir o **valor** de um endereço de memória.

**Exemplo didático:**
* Da mesma forma que uma casa tem um número de identificação que chamamos de endereço, as variáveis não são diferentes. Quando criamos uma variável o computador armazena-a em algum lugar, esse lugar chamamos de memória.

* Essa memória também contém um endereço, onde a partir do **&** conseguimos acessá-la e com o **\*** é possível adquirir seu valor.

```C
// Declara uma variável do tipo inteiro que recebe o valor 0
int numero = 0; 

// Declara uma variável do tipo int que recebe um ponteiro para o endereço de memória da variável "numero"
int * ponteiro_num = &numero;

// Declara uma variável do tipo int que recebe o valor do endereço de memória do ponteiro
int valorDoPonteiro = *ponteiro_num;
```

### Structs:

- As estruturas (struct) em C são um tipo composto de dados.
- Quando se define uma estrutura é criado um novo tipo que agrupará todos os campos definidos dentro dessa estrutura.
- Assim, quando definimos uma variável como sendo do tipo de uma estrutura, essa variável conterá os campos definidos na estrutura.

* Então, a struct em C é como um objeto?

- Não. Os objetos (Programação Orientada a Objetos) além de terem **atributos (propriedades)**, ele devem possuir **comportamentos (métodos)**, coisa que as estruturas em C não possuem.
- Claro que em C++ a estrutura possui quase a mesma funcionalidade de uma classe, podendo ter então métodos. **Mas isso, em C, não é possível.**

* Apoio: (https://embarcados.com.br/vetor-de-struct/)

```C
// Definindo struct de Pessoa
struct Pessoa {
    char nome[15];
    char sobrenome[15]
    int idade;
}

// Declarando variável do tipo struct de Pessoa
Pessoa pessoazinha;

pessoazinha.nome;
pessoazinha.sobrenome;
pessoazinha.idade;

// Declarando variável ARRAY do tipo struct de Pessoa
Pessoa pessoas[10];

// Exemplo para acessar cada índice de pessoa
pessoas[0].nome;
pessoas[0].sobrenome;
pessoas[0].idade;
```