/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 07: Uma loja está oferecendo um grande desconto: para as clientes que levarem 3 produtos,
será dado um desconto de 20% no valor total da compra. Crie um algoritmo que leia o preço dos três produtos e
calcule e imprima no console: o valor do total da compra sem desconto, quanto foi o desconto e quanto deverá ser pago.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float produto = 0;
    float custoSemDesconto = 0;
    float custoComDesconto = 0;
    float desconto = 0;
    float percentualDesconto = 0.2;
    int contador = 3; // número de preços/produtos que serão lidos

    // Leitura das notas.
    for (int i = 0; i < contador; i++)
    {
        printf("Entre com o preço do produto #%d: ", (i + 1));
        scanf(" %f%*[^\n]", &produto);

        // Adiciona o preço lido à soma do custo de produtos SEM desconto
        custoSemDesconto += produto;
    }

    // Calcula o custo dos produtos COM desconto
    custoComDesconto = custoSemDesconto * (1 - percentualDesconto);

    // Calcula o valor do desconto
    desconto = custoSemDesconto - custoComDesconto;

    // Imprimindo os valores das variáveis
    printf("Valor total da compra sem desconto: %.2f\n", custoSemDesconto);
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor total que deverá ser pago (com desconto): %.2f\n", custoComDesconto);

    return 0;
}