/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 18: Escreva um programa que leia duas notas de um aluno, calcule e exiba a média que ele obteve e
informe se o aluno foi aprovado ou não na disciplina (considerar a média para aprovação maior ou igual a 6).
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

    // Se média >= 6; Aprovado
    if (media >= 6)
        printf("Aluno Aprovado\n");
    else
        printf("Aluno Reprovado\n");

    return 0;
}