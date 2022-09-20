/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 10: Escreva um algoritmo para ler as dimensôes de um retângulo (base e altura), calcular e escrever a área do retângulo.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float base = 0;
    float altura = 0;
    float area = 0;
    
    // Leitura da base.
    printf("Entre com o valor da base: ");
    scanf(" %f%*[^\n]", &base);
    
    // Leitura da altura.
    printf("Entre com o valor da altura: ");
    scanf(" %f%*[^\n]", &altura);

    // Caulcula a área
    area = base * altura;

    // Imprimindo os valores das variáveis
    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}