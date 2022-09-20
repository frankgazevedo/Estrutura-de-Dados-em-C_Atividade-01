/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 01
Data: 20/09/2022

Questão 23: Escreva um algoritmo que ajude o usuário a descobrir se ele precisa abastecer o carro ou não e, se sim,
quanto ele precisa abastecer. O programa deve começar perguntando ao usuário:

(1) quantos quilômetros o carro faz por litro

(2) quantos litros de gasolina há no momento

(3) qual distância ele deseja percorrer.

O programa avisa ao usuário se ele precisa abastecer ou não. Caso o usuário precise abastecer, deve ser informado quantos litros o usuário deve abastecer.

Exemplo

Quantos quilômetros o carro percorre por litro? 5

Quantos litros tem no carro atualmente? 20

Qual distância (em Km) você deseja percorrer? 150

Você precisa abastecer 10 litros.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    float autonomia = 0;         // quantidade de Km que podem ser rodados com 1l
    float tanque = 0;            // quantidade de litros atual disponível
    float distancia = 0;         // distância que se deseja percorrer
    float distanciaMax = 0;      // distância máxima possível de ser percorrida com o tanque disponível
    float distanciaPendente = 0; // distância que não poderá ser percorrida com o tanque disponível
    float qtdAbastecer = 0;      // quantidade que deve ser abastecida para se alcançar a distância que não poderá ser percorrida com o tanque disponível

    // Leituras.
    printf("Quantos quilômetros o carro percorre por litro? ");
    scanf(" %f%*[^\n]", &autonomia);

    printf("Quantos litros tem no carro atualmente? ");
    scanf(" %f%*[^\n]", &tanque);

    printf("Qual distância (em Km) você deseja percorrer? ");
    scanf(" %f%*[^\n]", &distancia);

    // Calcula quanto quilômetros podem ser percorridos com o tanque disponível
    distanciaMax = autonomia * tanque;

    // Verifica se é possível percorrer a distância que se deseja percorrer com o tanque disponível
    if (distanciaMax >= distancia) // o tanque atual é suficiente para percorrer a distância informada
        printf("Não é preciso abastecer o carro.\n");
    else
    {
        distanciaPendente = distancia - distanciaMax; // Calcula a distância que não poderá ser percorrida com o tanque disponível
        qtdAbastecer = distanciaPendente / autonomia; // quantidade que deve ser abastecida para se alcançar a distância que não poderá ser percorrida com o tanque disponível
        printf("Você precisa abastecer %.2f litros.\n", qtdAbastecer);
    }

    return 0;
}