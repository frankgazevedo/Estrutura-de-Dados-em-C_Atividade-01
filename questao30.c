/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 30: Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre,
e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:

Média de Aproveitamento / Conceito

Entre 9.0 e 10.0 / A

Entre 7.5 e 9.0 / B

Entre 6.0 e 7.5 / C

Entre 4.0 e 6.0 / D

Entre 4.0 e zero / E
*/

#include <stdio.h>

// quantidade de notas que serão lidas
#define QTD_NOTAS 2

int main()
{
    // Declaração e inicialização de Variáveis
    float nota = 0;
    float soma = 0;
    float media = 0;
    char conceito = '0';

    // Leitura das notas.
    for (int i = 0; i < QTD_NOTAS; i++)
    {
        printf("Entre com a nota #%d: ", (i + 1));
        scanf(" %f%*[^\n]", &nota);

        // Adiciona a nota lida à soma de notas
        soma += nota;
    }

    // Calcula a média
    media = soma / QTD_NOTAS;

    // Imprimindo os valores das variáveis
    printf("Média: %.2f\n", media);

    // Imprime o conceito de acordo com a média obtida
    if (media >= 0 && media < 4)
        printf("Conceito E\n");
    else if (media >= 4 && media < 6)
        printf("Conceito D\n");
    else if (media >= 6 && media < 7.5)
        printf("Conceito C\n");
    else if (media >= 7.5 && media < 9)
        printf("Conceito B\n");
    else if (media >= 9 && media <= 10)
        printf("Conceito A\n");

    return 0; // se a média não estiver no intervalo [0, 10], encerra o programa sem atribuição de conceito
}