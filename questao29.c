/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 29: Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool:

até 20 litros, desconto de 3% por litro

acima de 20 litros, desconto de 5% por litro

Gasolina:

até 20 litros, desconto de 4% por litro

acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a
ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.
*/

#include <stdio.h>

#define CUSTO_UNITARIO_LITRO_ALCOOL 1.9
#define CUSTO_UNITARIO_LITRO_GASOLINA 2.5
#define QTD_LIMIAR 20 // Representa a quantidade limiar de combustível e, portanto, do valor do desconto aplicável

int main()
{
    // Declaração e inicialização de Variáveis
    float qtdLitros = 0;
    float custoTotal = 0;
    float desconto = 0;
    char tipoCombustivel = '0';

    // Leitura: quantidade de litros vendidos.
    printf("Entre com a quantidade de litros vendidos? ");
    scanf(" %f%*[^\n]", &qtdLitros);

    // Leitura: tatuagem no último ano.
    printf("Entre com o tipo de combustível (A-álcool, G-gasolina): ");
    scanf(" %c%*[^\n]", &tipoCombustivel);

    // Analisa se o combustível informado foi ALCOOL
    // Atentar ao fato de que não foi realizado qualquer tratamento para o caso do usuário não informar um valor de acordo
    // com a especificação A-álcool e G-gasolina.
    if (tipoCombustivel == 'A')
    {
        if (qtdLitros <= QTD_LIMIAR) // Desconto de 3%
        {
            desconto = 0.03;
            custoTotal = qtdLitros * CUSTO_UNITARIO_LITRO_ALCOOL * (1 - desconto);

            // Imprime o valor total devido
            printf("Valor a ser pago: %.2f\n", custoTotal);

            return 0; // encerra o programa
        }

        // Desconto de 5%
        desconto = 0.05;
        custoTotal = qtdLitros * CUSTO_UNITARIO_LITRO_ALCOOL * (1 - desconto);

        // Imprime o valor total devido
        printf("Valor a ser pago: %.2f\n", custoTotal);

        return 0; // encerra o programa    }
    }

    // Analisa se o combustível informado foi GASOLINA
    // Atentar ao fato de que não foi realizado qualquer tratamento para o caso do usuário não informar um valor de acordo
    // com a especificação A-álcool e G-gasolina.
    if (tipoCombustivel == 'G')
    {
        if (qtdLitros <= QTD_LIMIAR) // Desconto de 4%
        {
            desconto = 0.04;
            custoTotal = qtdLitros * CUSTO_UNITARIO_LITRO_GASOLINA * (1 - desconto);

            // Imprime o valor total devido
            printf("Valor a ser pago: %.2f\n", custoTotal);

            return 0; // encerra o programa
        }

        // Desconto de 6%
        desconto = 0.06;
        custoTotal = qtdLitros * CUSTO_UNITARIO_LITRO_GASOLINA * (1 - desconto);

        // Imprime o valor total devido
        printf("Valor a ser pago: %.2f\n", custoTotal);

        return 0; // encerra o programa    }
    }

    return 0;
}