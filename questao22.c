/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 22: Escreva um programa que calcule o Índice de Massa Corporal (IMC) de uma pessoa.
Lembre-se que o IMC é o resultado da razão entre o peso da pessoa e o quadrado da altura da pessoa (peso/altura2).
Ao fim, o programa deve exibir uma mensagem que depende do valor do IMC calculado (conforme listado abaixo).

• Abaixo de 17: muito abaixo do peso

• Entre 17 e 18,49: abaixo do peso

• Entre 18,50 e 24,99: peso normal

• Entre 25 e 29,99: acima do peso

• Entre 30 e 34,99: obesidade I

• Entre 35 e 39,99: obesidade II (severa)

• acima de 40: obesidade III (mórbida)
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

    
    // Analisando o IMC
    printf("IMC: %.2lf\n", imc);
    if (imc < 17)
        printf("muito abaixo do peso\n");
    else if (imc >= 17 && imc <= 18.49)
        printf("abaixo do peso\n");
    else if (imc >= 18.5 && imc <= 24.99)
        printf("peso normal\n");
    else if (imc >= 25 && imc <= 29.99)
        printf("acima do peso\n");
    else if (imc >= 30 && imc <= 34.99)
        printf("obesidade I\n");
    else if (imc >= 35 && imc <= 39.99)
        printf("obesidade II (severa)\n");
    else // imc >= 40
        printf("obesidade III (mórbida)\n");

    return 0;
}