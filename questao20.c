/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 20: Crie um programa que leia as três medidas dos lados de um triângulo e, em seguida,
exiba para o usuário de que tipo de triângulo se trata. Na matemática, um triângulo é dito equilátero
se todos os seus lados têm a mesma medida; isósceles é quando apenas há dois lados iguais; e escaleno quando todos os lados são diferentes.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float ladoA = 0;
    float ladoB = 0;
    float ladoC = 0;

    // Leitura dos lados.
    printf("Entre com o lado #A: ");
    scanf(" %f%*[^\n]", &ladoA);

    printf("Entre com o lado #B: ");
    scanf(" %f%*[^\n]", &ladoB);

    printf("Entre com o lado #C: ");
    scanf(" %f%*[^\n]", &ladoC);

    // Analisando o tipo de triângulo
    if (ladoA == ladoB && ladoA == ladoC)
        printf("Triângulo Equilátero\n");

    else if (ladoA != ladoB && ladoB != ladoC && ladoC != ladoA)
        printf("Triângulo Escaleno\n");
    else
        printf("Triângulo isósceles\n");

    return 0;
}