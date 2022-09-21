/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 24: Doar sangue é uma atitude muito importante, entretanto é preciso atender alguns requisitos.

• Ter entre 19 e 69 anos de idade

• Pesar ao menos 50 kg

• Não ter feito nenhuma tatuagem no último ano

• Não ter ingerido álcool nas últimas 12 horas.

Escreva um programa que pergunte ao usuário se ele atende os requisitos necessários para doar sangue.
Faça as perguntas uma por vez. Caso a resposta dele o impede de doar, avise-o e encerre o programa.
Se ele atender todos os requisitos, avise-o que ele pode ser doador.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    int idade = 0;
    float peso = 0;
    char tattoo = '0';
    char alcool = '0';

    // Leitura da idade.
    printf("Quantos anos você tem? ");
    scanf(" %i%*[^\n]", &idade);

    // Verifica se doador possui idade suficiente
    if (idade < 19 || idade > 70)
    {
        printf("Você não pode ser doador\n");
        return 0; // encerra o programa
    }

    // Leitura do peso.
    printf("Qual o seu peso? ");
    scanf(" %f%*[^\n]", &peso);

    // Verifica se doador possui peso suficiente
    if (peso < 50)
    {
        printf("Você não pode ser doador\n");
        return 0; // encerra o programa
    }

    // Leitura: tatuagem no último ano.
    printf("Você fez alguma tatuagem no último ano? S/s/N/n? ");
    scanf(" %c%*[^\n]", &tattoo);

    // Verifica se doador fez alguma tatuagem no último ano
    // Atentar ao fato de que não foi realizado qualquer tratamento para o caso do usuário não informar um valor de acordo
    // com a especificação S/s para SIM e N/n para NÃO.

    if (tattoo == 'S' || tattoo == 's')
    {
        printf("Você não pode ser doador\n");
        return 0; // encerra o programa
    }

    // Leitura: ingestão de álcool nas últimas 12 horas.
    printf("Você ingeriu álcool nas últimas 12 horas? S/s/N/n? ");
    scanf(" %c%*[^\n]", &alcool);

    // Verifica se doador ingeriu álcool nas últimas 12 horas.
    // Atentar ao fato de que não foi realizado qualquer tratamento para o caso do usuário não informar um valor de acordo
    // com a especificação S/s para SIM e N/n para NÃO.

    if (alcool == 'S' || alcool == 's')
    {
        printf("Você não pode ser doador\n");
        return 0; // encerra o programa
    }

    printf("Você pode doar\n");

    return 0;
}