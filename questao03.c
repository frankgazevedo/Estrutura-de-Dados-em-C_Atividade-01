/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 03: Escreva um algoritmo para calcular o IMC (Índice Massa Corporal). O programa deverá ler o peso e
a altura informada e como resultado informar o valor do índice.
*/

#include <stdio.h>

// necessária para a utilização da função pow(). Importante ressaltar que, ao menos no Linux, é necessário 
// adicionar o parâmetro -lm na linha de compilação. No caso, compilei do seguinte modo: gcc source.c -o executableName -lm
#include <math.h>

int main()
{
    // Declaração e inicialização de Variáveis
    double peso = 0;
    double altura = 0;
    double imc = 0;

    // Leitura do peso em Kg.
    printf("Entre com o peso (Kg): ");
    scanf(" %lf%*[^\n]", &peso);

    // Leitura da altura em metros (m).
    printf("Entre com a altura (m): ");
    scanf(" %lf%*[^\n]", &altura);

    // Calculando o IMC: IMC = peso / (altura * altura)
    imc = peso / pow(altura, 2);

    // Imprimindo os valores das variáveis
    printf("IMC: %.2lf\n", imc);

    return 0;
}