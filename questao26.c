/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 26: Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.
*/

#include <stdio.h>

// Quantidade de números que serão analisados
#define QTD_NUMS 50

int main()
{
    for (int i = 1; i <= QTD_NUMS; i++)
    {
        if (i % 2 != 0) // Se o resto da divisão inteira for diferente de 0
            printf("%d\n", i);
    }

    return 0;
}