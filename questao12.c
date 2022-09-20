/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 12: Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
como resultado escreva a quantidade de horas que a pessoa tem de vida. Considerar ano com 365 dias e mês com 30 dias.
*/

#include <stdio.h>
#define ANO_CORRENTE 2022

int main()
{
    // Declaração e inicialização de Variáveis
    int anoNascimento = 0;
    int mesNascimento = 0;
    int diaNascimento = 0;
    int qtdTotalAnos = 0;
    int qtdTotalMeses = 0;
    int qtdTotalDias = 0;
    int qtdTotalHoras = 0;

    // Leituras.
    printf("Entre com o ano de nascimento: ");
    scanf(" %i%*[^\n]", &anoNascimento);

    printf("Entre com o mês de nascimento (01 a 12): ");
    scanf(" %i%*[^\n]", &mesNascimento);

    printf("Entre com o dia de nascimento (01 a 31): ");
    scanf(" %i%*[^\n]", &diaNascimento);

    // Caulcula quantidade total de diaDeNascimentos de vida em relação ao ANO_CORRENTE
    qtdTotalAnos = ANO_CORRENTE - anoNascimento;
    qtdTotalMeses = (qtdTotalAnos * 12) + mesNascimento;
    qtdTotalDias = (qtdTotalMeses * 30) + diaNascimento;
    qtdTotalHoras = qtdTotalDias * 24;

    // Imprimindo os valores das variáveis
    printf("Idade em horas (em relação ao ano corrente): %.2i\n", qtdTotalHoras);

    return 0;
}