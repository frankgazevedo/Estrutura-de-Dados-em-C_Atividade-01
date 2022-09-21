/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 28: Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de
crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.

Faça um programa que calcule e escreva o número de anos necessários para que a população do país A
ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.
*/

#include <stdio.h>

#define POPULACAO_A 80000
#define TX_CRESCIMENTO_A 0.03
#define POPULACAO_B 200000
#define TX_CRESCIMENTO_B 0.015

int main()
{
    // Declaração e inicialização de variáveis
    int qtdAnos = 0;

    // Metodologia de cálculo
    // Considerando que:
    // f(x) = x * TX_CRESCIMENTO_A + POPULACAO_A, onde x = quantidade de anos
    // g(x) = x * TX_CRESCIMENTO_B + POPULACAO_B, onde x = quantidade de anos

    // Então, para f(x) = g(x)
    // x = [POPULACAO_B - POPULACAO_A] / [TX_CRESCIMENTO_A - TX_CRESCIMENTO_B]

    // Calcula efetivamente a quantidade de anos necessários para que população do país A
    // ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento
    qtdAnos = (POPULACAO_B - POPULACAO_A) / (TX_CRESCIMENTO_A - TX_CRESCIMENTO_B);

    // Imprimindo os valores das variáveis
    printf("Quantidade de de anos necessários para que população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento: %.2i de anos.\n", qtdAnos);

    return 0;
}