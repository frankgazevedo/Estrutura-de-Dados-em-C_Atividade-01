/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 27: Faça um programa que imprima na tela apenas os números pares entre 100 e 1000.
*/

#include <stdio.h>

// Quantidade de números que serão analisados
#define QTD_NUMS 1000

int main()
{
    for (int i = 100; i <= QTD_NUMS; i++)
    {
        if (i % 2 == 0) // Se o resto da divisão inteira for igual a 0
            printf("%d\n", i);
    }

    return 0;
}