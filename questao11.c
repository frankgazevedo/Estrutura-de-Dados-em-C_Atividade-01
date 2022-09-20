/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 11: Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e diaDeNascimentos e
 como resultado escreva a idade dessa pessoa expressa apenas em diaDeNascimentos. Considerar anoDeNascimento com 365 diaDeNascimentos e mês com 30 diaDeNascimentos.
*/

#include <stdio.h>
#define ANO_CORRENTE 2022

int main()
{
    // Declaração e inicialização de Variáveis
    int anoDeNascimento = 0;
    int mesDeNascimento = 0;
    int diaDeNascimento = 0;
    int qtdTotalAnos = 0;
    int qtdTotalMeses = 0;
    int qtdTotaldiaDeNascimentos = 0;

    // Leituras.
    printf("Entre com o anoDeNascimento de nascimento: ");
    scanf(" %i%*[^\n]", &anoDeNascimento);

    printf("Entre com o mês de nascimento (01 a 12): ");
    scanf(" %i%*[^\n]", &mesDeNascimento);

    printf("Entre com o diaDeNascimento de nascimento (01 a 31): ");
    scanf(" %i%*[^\n]", &diaDeNascimento);

    // Caulcula quantidade total de diaDeNascimentos de vida em relação ao ANO_CORRENTE
    qtdTotalAnos = ANO_CORRENTE - anoDeNascimento;
    qtdTotalMeses = (qtdTotalAnos * 12) + mesDeNascimento;
    qtdTotaldiaDeNascimentos = (qtdTotalMeses * 30) + diaDeNascimento;

    // Imprimindo os valores das variáveis
    printf("Idade em diaDeNascimentos (em relação ao anoDeNascimento corrente): %.2i\n", qtdTotaldiaDeNascimentos);

    return 0;
}