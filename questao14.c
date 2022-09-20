/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 14: Escreva um algoritmo que verifique se um número fornecido pelo usuário é par ou é ímpar.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    int numero = 0;

    // Leitura do número
    printf("Entre com um número: ");
    scanf(" %i%*[^\n]", &numero);

    // Verifica se o número é par ou ímpar 
    if(numero % 2 == 0) // Se o resto da divisão inteira for igual a 0
        printf("Número PAR\n");
    else
        printf("Número ÍMPAR\n");

    return 0;
}