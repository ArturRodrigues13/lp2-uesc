/*
	1. Calcule a área de um círculo usando ponteiros.
	Escreva um programa que pegue o raio de um círculo como entrada, calcule a área usando uma
	função e retorne o resultado usando um ponteiro.
*/

#include <stdio.h>
#include <math.h>

void calcula(double *raio); // Declaração da Função antes da main;

int main(void)
{
	double raio; // Variável para armazenar o raio que o usuário entregará;

	double *pa = &raio; // Ponteiro que aponta pra variável que armazena o raio;

	printf("Olá, bem vindo à Calculadora de Área de Círculos com Ponteiros, por favor me diga o valor do Raio deste círculo que você deseja calcular a área.");
	scanf("%le",&raio); // Pegar o valor digitado pelo usuário e armazena-lo na variável raio;

	calcula(pa); // Executar função usando o ponteiro como argumento;

	printf("Cá está o resultado usando ponteiros, o valor da área do seu círculo é %.2f, incrível.",raio); // Exibição do resultado com apenas duas casas decimais para evitar poluição visual;

	return 0;
}

void calcula(double *raio) // Definição da função;
{
	double area = 3.14 * pow(*raio,2); // Cálculo simples para área de um círculo, PI * raio², nesse caso aproximei PI para 3,14;

	*raio = area; // Passa o valor para o ponteiro;
}
