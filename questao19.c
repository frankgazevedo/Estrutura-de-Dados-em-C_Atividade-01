/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 19: Crie um programa que leia o nome de uma pessoa e seu sexo (M para masculino e F para feminino). 
Ao final, o programa deve imprimir a mensagem “Bom dia senhor” ou “Bom dia senhora” seguida do nome.
*/

#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
    // Declaração e inicialização de Variáveis
    char nome[MAX];
    char genero = '0';

    // Leitura do nome.
    printf("Entre com o nome: ");
    // fgets(): lê entrada até "nova linha" (LF). Quando a "nova linha" é lida o caractere '\n' (ASCII 10 LF) é acrescento na string, seguido pela terminação '\0' (NULL).
    // Em razão disso, a string lida pelo fgets apresenta um caractere a mais, o '\n' (ASCII 10 LF), antes do '\0' (NULL).
    fgets(nome, sizeof(nome), stdin);

    // Por isso, o trecho abaixo é utilizado para limpar da string o caractere '\n'.
    int length = strlen(nome);
    if (nome[length - 1] == '\n')
        nome[length - 1] = '\0';
    
    // Leitura do gênero.
    printf("Entre com o gênero (M: masculino; F: feminino): ");
    scanf(" %c%*[^\n]", &genero);
    
    // Imprimindo os valores das variáveis
    // Atentar ao fato de que não foi realizado qualquer tratamento para o caso do usuário não informar um gênero de acordo 
    // com a especificação M para masculino e F para feminino. 
    if (genero == 'F')
            printf("Bom dia, senhora %s\n", nome);
    
    if (genero == 'M')
            printf("Bom dia, senhor %s\n", nome);

    return 0;
}