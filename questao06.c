/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 06: Sabe-se que o m2 de construção custa 50 reais. Escreva um algoritmo que leia as medidas de um terreno retangular, 
calcula e imprime quanto custa para construir uma casa que ocupe esse terreno.
*/

#include <stdio.h>
#define CUSTO_M2 50 // Custo de construção de 01 (um) m²

int main()
{
    // Declaração e inicialização de Variáveis
    float base = 0;
    float altura = 0;
    float area = 0;
    float custoObra = 0;

    // Leituras.
    printf("Entre com a base do terreno (m): ");
    scanf(" %f%*[^\n]", &base);

    printf("Entre com a altura do terreno (m): ");
    scanf(" %f%*[^\n]", &altura);

    // Calculo da área do terreno
    area = base * altura;

    // Calculo da área do terreno
    custoObra = area * CUSTO_M2;

    // Imprimindo os valores das variáveis
    printf("Custo da Obra: %.2f\n", custoObra);

    return 0;
}