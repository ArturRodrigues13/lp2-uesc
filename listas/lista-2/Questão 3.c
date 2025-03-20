/*
	3. Crie e acesse uma estrutura simples.
	Defina uma estrutura representando um "Ponto" com duas coordenadas (x e y). Escreva uma função
	para criar um Ponto e, em seguida, imprima seus valores usando ponteiros.
*/

#include <stdio.h>

void pontos(int *px, int *py); // Declaração da função;

int main()
{
	printf("Olá, bem vindo ao Criador de Pontos, vamos formar uma coordenada!!!");

	struct coordenadas // Criação do Struct
	{
		int x; // Variavel para armazenar o x do ponto;
		int y; // Variavel para armazenar o y do ponto;
	};

	struct coordenadas ponto; // Criação da variavel que acessa o Struct;

	int *px = &ponto.x; // Ponteiro que aponta para a variavel x do Struct;
	int *py = &ponto.y; // Ponteiro que aponta para a variavel y do Struct;

	pontos(px, py); // Execução da função usando os ponteiros como argumento;

	return 0;
}

void pontos(int *px, int *py) // Definição da função;
{
	printf("\nInsira o ponto X: ");
	scanf("%d", px); // Pegar o valor digitado pelo usuário e atribui-lo ao ponteiro;

	printf("\nInsira o ponto Y: ");
	scanf("%d", py); // Pegar o valor digitado pelo usuário e atribui-lo ao ponteiro;

	printf("\nCoordenadas: (%d, %d)\n", *px, *py); // Imprimir as coordenadas usando os ponteiros de referência;
}
