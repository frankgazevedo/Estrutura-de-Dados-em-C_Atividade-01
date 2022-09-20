/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 15: Escrever um algoritmo que leia dois valores inteiros distintos e informe qual é o maior.
*/

#include <stdio.h>
#include <limits.h> // Biblioteca que contém a macro INT_MIN (especifica o menor número do tipo INT representável na máquina de execução)

// Quantidade de números que serão lidos
#define QTD_NUMS 2

int main()
{
    // Declaração e inicialização de Variáveis
    int numero = 0;
    int maiorNumero = INT_MIN; // Garantindo que o maior valor será, necessariamente, o menor inteiro representável na máquina de execução

    // Leitura dos números.
    for (int i = 0; i < QTD_NUMS; i++)
    {
        printf("Entre com o número #%d: ", (i + 1));
        scanf(" %d%*[^\n]", &numero);

        // Analise se o número recém lido é maior que o número anteriormente lido
        if (numero > maiorNumero)
            maiorNumero = numero; // Atualiza o valor do maior número
    }

    // Imprime o maior número digitado
    printf("Maior número: %d\n", maiorNumero);

    return 0;
}