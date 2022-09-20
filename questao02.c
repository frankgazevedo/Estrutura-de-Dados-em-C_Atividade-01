/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 02: Faça um algoritmo que leia o nome e salário de um funcionário, calcule e mostre o reajuste
do salário com um aumento de 15%.


*/

#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
    // Declaração e inicialização de Variáveis
    char nomeFunc[MAX];
    float salarioFunc = 0;
    float reajusteSalario = 0.15;

    printf("Entre com o nome do Funcionário: ");
    // Leitura da String que contém o nome do Funcionário.
    // fgets(): lê entrada até "nova linha" (LF). Quando a "nova linha" é lida o caractere '\n' (ASCII 10 LF) é acrescento na string, seguido pela terminação '\0' (NULL).
    // Em razão disso, a string lida pelo fgets apresenta um caractere a mais, o '\n' (ASCII 10 LF), antes do '\0' (NULL).
    fgets(nomeFunc, sizeof(nomeFunc), stdin);

    // Por isso, o trecho abaixo é utilizado para limpar da string o caractere '\n'.
    int length = strlen(nomeFunc);
    if (nomeFunc[length - 1] == '\n')
        nomeFunc[length - 1] = '\0';
    
    printf("Entre com o salário do Funcionário: ");
    // Leitura do salário do Funcionário.
    scanf(" %f%*[^\n]",&salarioFunc);

    // Calculando o salário atualizado
    salarioFunc *= (1 + reajusteSalario); // salario = salário * (1 + reajuste)
    
    // Imprimindo os valores das variáveis
    printf("Nome do Funcionário: %s\n", nomeFunc);
    printf("Salário do Funcionário: %.2f\n", salarioFunc);

    return 0;
}