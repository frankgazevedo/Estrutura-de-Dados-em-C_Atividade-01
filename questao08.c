/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 08: Escreva um algoritmo que transforme o grau Celsius dado pelo usuário em Fahrenheit.
Lembrete, a fórmula para conversão é: F = C * (9/5) + 3.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float celsius = 0;
    float fahrenheit = 0;

    // Leitura da temperatura em Celsius.
    printf("Entre com a temperatura em graus Celsius: ");
    scanf(" %f%*[^\n]", &celsius);

    // Converte a temperatura de Celsius para Fahrenheit
    fahrenheit = celsius * (9 / 5) + 3;

    // Imprimindo os valores das variáveis
    printf("A temperatura em graus fahrenheit equivale a : %.2f\n", fahrenheit);

    return 0;
}