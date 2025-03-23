/*
	9. Crie uma função que execute adição de matrizes usando ponteiros para matrizes 2D.
	Dica: Use aritmética de ponteiro duplo para acessar elementos de matriz 2D.
*/

#include <stdio.h>

void somatriz2D(int *ptriz,int *ptriz_2,int tamanho, int tamanho_2); // Declaração da função;

int main(void)
{
	int tamanho; // Variável para armazenar o tamanho da primeira dimensão das matriz;
	int tamanho_2; // Variável para armazenar o tamanho da segunda dimensão das matriz;

	printf("Olá, bem vindo a Somadora de Matrizes 2D, me dê duas matrizes 2D que eu irei soma-las!!!\n");
	printf("Primeiramente, me diga qual será o tamanho delas (Por exemplo, caso você coloque 3 e depois 2, a matriz seria: matriz[3][2])!!!\n");
	printf("Primeiro tamanho: ");
	scanf("%d",&tamanho); // Atribui o valor digitado pelo usuário na variável tamanho;
	printf("Segundo tamanho: ");
	scanf("%d",&tamanho_2); // Atribui o valor digitado pelo usuário na variável tamanho_2;

	int matriz_1[tamanho][tamanho_2]; // Criação da primeira matriz com os valores previamente enviados;
	int matriz_2[tamanho][tamanho_2]; // Criação da segunda matriz com os valores previamente enviados;

	printf("Okay, agora vamos preencher essas matrizes, vá mandando os valores da primeira matriz que eu irei armazena-los!!!\n");

	for (int i = 0; i < tamanho; i++) // Primeiro Loop for baseado na primeira dimensão da primeira matriz;
	{
		for (int j = 0;j < tamanho_2; j++) // segundo Loop for baseado na segunda dimensão da segunda matriz;
		{
			printf("Valor %d da linha %d: ",j + 1,i + 1); // Impressão do valor atual para o usuário ter um feedback visual;
			scanf("%d",&matriz_1[i][j]); // Adicionar o valor na matriz no i e no j atual
		}
	}

	printf("Agora os da segunda matriz!!!\n");

	for (int i = 0; i < tamanho; i++)// Primeiro Loop for baseado na primeira dimensão da primeira matriz;
	{
		for (int j = 0;j < tamanho_2; j++)// segundo Loop for baseado na segunda dimensão da segunda matriz;
		{
			printf("Valor %d da linha %d: ",j + 1,i + 1); // Impressão do valor atual para o usuário ter um feedback visual;
			scanf("%d",&matriz_2[i][j]); // Adicionar o valor na matriz no i e no j atual
		}
	}

	int *ptriz_1 = matriz_1; // Ponteiro que aponta para a primeira matriz;
	int *ptriz_2 = matriz_2; // Ponteiro que aponta para a segunda matriz;

	somatriz2D(ptriz_1,ptriz_2,tamanho,tamanho_2); // Execução da função com as duas matrizes e os dois tamanhos como argumento;

	printf("Sua nova Matriz pós somátoria é: Matriz_Nova2D: {");
	for (int z = 0;z < tamanho; z ++) // Loop for imprimir a primeira dimensão da nova matriz;
	{
		printf("{");
		for (int x = 0; x < tamanho_2; x++) // Loop for imprimir a segunda dimensão da nova matriz com seus reespectivos valores pós soma;
		{
			printf("%d ",ptriz_1[z * tamanho_2 + x]); // Impressão dos valores da nova matriz;
		}
		printf("}");
	}
	printf("}");

	return 0;
}

void somatriz2D(int *ptriz,int *ptriz_2,int tamanho,int tamanho_2) // Definição da função
{
	for (int i = 0; i < tamanho * tamanho_2; i++) // Loop for para criar a nova matriz, obtém seu ponto de parada multiplicando o tamanho total das duas dimensões da matriz, assim conseguindo o número de elementos que ali estarão contidos;
	{
		ptriz[i] += *(ptriz_2 + i); // Formação da nova Matriz 2D se baseando na soma do valor contido na primeira matriz no i com o da segunda também no i, mas usando aritmética de ponteiros.
	}
}
