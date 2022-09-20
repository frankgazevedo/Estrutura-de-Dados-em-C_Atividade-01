/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 16: Escreva um programa que leia a idade de uma pessoa. Ao final, exiba se essa pessoa é de maior de idade ou não.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    int idade = 0;

    // Leitura da idade
    printf("Entre com a idade: ");
    scanf(" %i%*[^\n]", &idade);
    
    // Verifica se a idade digitada é maior que 18 (maioridade no Brasil)
    // Atentar para o fato de que não é verificada idade incompatível com o tempo de vida médio do ser humano. 
    // Logo, v.g., é possível informar uma idade acima de 200 anos ou uma idade negativa, sem que o programa acuse erro.
    if(idade >= 18)
        printf("Maior de idade\n");
    else
        printf("Menor de idade\n");

    return 0;
}