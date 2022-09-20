/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 13: Uma pessoa recebe RS 3.300,00 reais de salário, 1% desse valor é descontado para contribuição sindical.
Além disso, tem um histórico de duas faltas todos meses. Considerando o mês com 22 dias úteis, quanto essa pessoa irá 
receber de salário líquido ao final do mês? Escreva um algortimo que represente esta situação.
*/

#include <stdio.h>
#include <string.h>
#define SALARIO 3300
#define CONTRIBUICAO_SINDICAL 0.01
#define DIAS_UTEIS 22
#define FALTAS 2

int main()
{
    // Declaração e inicialização de Variáveis
    float salarioLiquido = 0;
    float contribuicaoSindical = 0;
    float salarioDia = 0;
    float salarioMes = 0;
    int qtdDiasTrabalhados = 0;

    // Calcula o valor que será descontado a título de contribuição sindical
    contribuicaoSindical = SALARIO * CONTRIBUICAO_SINDICAL;

    // Calcula o valor de um dia útil de trabalho
    salarioDia = SALARIO / DIAS_UTEIS;

    // Calcula a quantidade de dias úteis efetivamente trabalahdos
    qtdDiasTrabalhados = DIAS_UTEIS - FALTAS;

    // Calcula o valor devido apenas em relação aos dias úteis efetivamente trabalhados
    salarioMes = salarioDia * qtdDiasTrabalhados;

    // Calcula o salário líquido 
    salarioLiquido = salarioMes - contribuicaoSindical;

    // Imprimindo os valores das variáveis
    printf("Salário líquido: %.2f\n", salarioLiquido);

    return 0;
}