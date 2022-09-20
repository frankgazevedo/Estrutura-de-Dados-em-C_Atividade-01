/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 09: Escreva um algoritmo que leia o valor do raio de uma circunferência e mostre para o usuário o valor do comprimento e, a área da mesma.
*/

#include <stdio.h>

// necessária para a utilização da função pow(). Importante ressaltar que, ao menos Linux, é necessário
// adicionar o parâmetro -lm na linha de compilação. No caso, compilei do seguinte modo: gcc source.c -o executableName -lm
#include <math.h>

int main()
{
    // Declaração e inicialização de Variáveis
    double radius = 0;
    double circumference = 0;
    double area = 0;

    // Leitura do raio (radius) da circunferência.
    printf("Entre com o valor do raio da circunferência: ");
    scanf(" %lf%*[^\n]", &radius);

    // Caulcula a área da circunferência
    area = M_PI * pow(radius, 2);

    // Caulcula a área da circunferência
    circumference = 2 * M_PI * radius;

    // Imprimindo os valores das variáveis
    printf("O comprimento da circunferência é: %.2lf\n", circumference);
    printf("A área da circunferência é: %.2lf\n", area);

    return 0;
}