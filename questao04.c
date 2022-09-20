/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 04: Escreva um algoritmo que leia três notas de um aluno e imprime no console a média que ele obteve na disciplina.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float nota = 0;
    float soma = 0;
    float media = 0;
    int contador = 3; // número de notas que serão lidas

    // Leitura das notas.
    for (int i = 0; i < contador; i++)
    {
        printf("Entre com a nota #%d: ", (i +1));
        scanf(" %f%*[^\n]", &nota);

        // Adiciona a nota lida à soma de notas
        soma += nota;
    }

    // Calcula a média
    media = soma / contador;

    // Imprimindo os valores das variáveis
    printf("Média: %.2f\n", media);

    return 0;
}