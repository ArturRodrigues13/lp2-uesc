/*
	5. Programa de Conversão de Temperatura.
	Escreva um programa que converta temperaturas entre Celsius e Fahrenheit usando funções. Passe o
	valor da temperatura por referência para modificar a variável original.
*/

#include <stdio.h>

void temp(double *calor,int qual); // Declaração da Função antes da main;

int main(void)
{
	int qual; // Variável para armazenar se o valor inicial que será convertido é Celsius ou Farenheit;

	double calor_futuro; // Variável para armazenar o resultado final;

	double *calor_atual = &calor_futuro; // Ponteiro que aponta pra variável que exibira o resultado final;

	printf("Olá, bem vindo ao Conversor de Temperaturas entre Celsius e Farenheit!!!\n");
	printf("Primeiramente, me diga, o valor inicial que você deseja converter está em Celsius ou em Farenheit?\n");

	printf("Para me sinalizar, digite 1 para Celsius ou 2 para Farenheit\n");
	scanf("%d",&qual); // Pegar o valor digitado pelo usuário e armazena-lo na variável qual;

	if (qual != 1 && qual != 2)
	{
		printf("Escolha incorreta, tente novamente!");
		return 1;
	}

	printf("Okayyy, agora me diga o valor da temperatura, por favor!\n");
	scanf("%le",&*calor_atual); // Pegar o valor digitado pelo usuário e armazena-lo no ponteiro;

	temp(calor_atual,qual); // Executar função usando o ponteiro e a forma inicial dele como argumento;

	printf("Boaaa, aqui está seu valor convertido: %.2f",calor_futuro); // Exibição do resultado com apenas duas casas decimais para evitar poluição visual;

	return 0;
}

void temp(double *calor, int qual) // Definição da função;
{
	if(qual == 1) // if simples pra decidir de qual pra qual converteremos;
	{
		*calor = 1.8 * *calor + 32; // Fórmula para conversão de Celsius para Farenheit;
	}
	else // else simples caso a condição seja falsa;
	{
		*calor = (*calor - 32) / 1.8; // Fórmula para conversão de Farenheit para Celsius;
	}
}
