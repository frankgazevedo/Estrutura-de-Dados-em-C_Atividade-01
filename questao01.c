/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 01: Escreva um algoritmo para armazenar o valor 22 na variável A e o valor 60 na variável B.
Então (usando apenas atribuições entre variáveis) altere seus conteúdos de forma que o valor em A
seja transferido para B e vice-versa. Finalmente, escreva os valores armazenados nas variáveis.
*/

#include <stdio.h>

int main()
{   
    // Declaração e inicialização de Variáveis
    int a = 22;
    int b = 60;
    int temp = 0;

    // Alternando os valores de A e B
    temp = a;
    a = b;
    b = temp;

    // Imprimindo os valores das variáveis
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    
    return 0;
}