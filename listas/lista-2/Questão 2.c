/*
	2. Soma de matriz usando ponteiros.
	Escreva uma função que recebe uma matriz de inteiros e seu tamanho, então calcula a soma dos elementos da matriz usando ponteiros.
*/

#include <stdio.h>

void somatriz(int *ptriz,int *ptriz2, int tamanho);// Declaração da Função antes da main;

int main(void)
{
	int tamanho; // Variável para armazenar o tamanho das Matrizes que o usuário enviará;

	printf("Olá, bem vindo ao Somador de Matrizes, me dê duas matrizes que eu irei soma-las\n");
	printf("Primeiramente, me diga qual será o tamanho delas: ");

	scanf("%d",&tamanho); // Armazenar o valor na variável tamanho;

	int matriz_1[tamanho]; // Criação da primeira matriz com o valor enviado;
	int matriz_2[tamanho]; // Criação da segunda matriz com o valor enviado;

	printf("Okay, agora vamos preencher essas matrizes, vá mandando os valores da primeira matriz que eu irei armazena-los!!!\n");

	for (int i = 0; i < tamanho; i++) // Loop for simples para pegar os valores que o usuário for digitando e armazena-los na primeira matriz;
	{
		printf("Valor %d: ",i + 1); // Impressão do valor atual para o usuário ter um feedback visual;
		scanf("%d",&matriz_1[i]); // Preenchimento da Matriz baseada no i;
	}

	printf("Agora os da segunda!!!\n");

	for (int j = 0; j < tamanho; j++)// Loop for simples para pegar os valores que o usuário for digitando e armazena-los na segunda matriz;
	{
		printf("Valor %d: ",j + 1); // Impressão do valor atual para o usuário ter um feedback visual;
		scanf("%d",&matriz_2[j]); // Preenchimento da Matriz baseada no j;
	}

	int *ptriz_1 = matriz_1; // Ponteiro que aponta para a primeira matriz;
	int *ptriz_2 = matriz_2; // Ponteiro que aponta para a segunda matriz;

	printf("Massa, agora vou somar os elementos dessas que você me entregou!!!\n");

	somatriz(ptriz_1,ptriz_2,tamanho); // Execução da função com os dois ponteiros e o tamanho das matrizes como argumento;

	return 0;
}

void somatriz(int *ptriz,int *ptriz2,int tamanho) // Definição da função;
{
	printf("Sua nova Matriz pós somátoria é: Matriz_Nova{ ");
    for (int i = 0; i < tamanho; i++) // Loop for simples para ir somando os valores baseados no i;
	{
		ptriz[i] += ptriz2[i]; // Soma dos elementos linearmente, primeiro soma com o primeiro, segundo soma com o segundo e assim por diante;

		printf("%d ",ptriz[i]); // Impressão do resultado;
	}
	printf("}");
}
