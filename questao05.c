/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 05: Escreva um algoritmo que leia o salário total de uma pessoa e quantas horas ela trabalha por dia.
Em seguida, calcule e imprima quanto essa pessoa recebe por hora.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float salarioTotal = 0;
    float qtdHorasDiarias = 0;
    float salarioHora = 0;

    // Leituras.
    printf("Entre com o salário total: ");
    scanf(" %f%*[^\n]", &salarioTotal);

    printf("Entre com a quantidade de horas trabalhadas: ");
    scanf(" %f%*[^\n]", &qtdHorasDiarias);

    // Calculo do salário por hora
    // Embora a questão não mencione, considerei que um mês (em tese, período que equivaleria ao salário total) possui 22 dias úteis.
    salarioHora = salarioTotal / (22 * qtdHorasDiarias);

    // Imprimindo os valores das variáveis
    printf("Salário por hora: %.2f\n", salarioHora);

    return 0;
}