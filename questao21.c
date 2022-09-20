/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 21: Construa um algoritmo que calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo.
Fórmulas para cálculo do peso:
• peso ideal de homem = (72,7 x altura) - 58;
• peso ideal da mulher = (62,1 x altura) - 44,7.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float peso = 0;
    float altura = 0;
    char genero = 0;

    // Leitura dos lados.
    printf("Entre com a altura (m): ");
    scanf(" %f%*[^\n]", &altura);

    printf("Entre com o gênero (M/m: masculino; F/f: feminino): ");
    scanf(" %c%*[^\n]", &genero);

    // Calculando o peso ideal
    // Atentar ao fato de que não foi realizado qualquer tratamento para o caso do usuário não informar um gênero de acordo
    // com a especificação M/m para masculino e F/f para feminino.
    if (genero == 'F' || genero == 'f')
        peso = (62.1 * altura) - 44.7;

    if (genero == 'M' || genero == 'm')
        peso = (72.7 * altura) - 58;

    printf("Peso ideal: %.2f\n", peso);

    return 0;
}