/*
	7. Implemente uma função que gire uma matriz de inteiros para a direita por um determinado
	número de posições usando ponteiros.
	Dica: Use uma matriz temporária para armazenar elementos que serão girados.
	A ideia é: deslocar todos os elementos do array para a direita em k posições. Elementos que "caem"
	do final do array são “girados”s para o início. Por exemplo, se tivermos o array [1, 2, 3, 4, 5] e o deslocarmos para a direita em 2 posições, o resultado seria [4, 5, 1, 2, 3].
*/

#include <stdio.h>

void mover(int *parray, int tamanhoArray, int posicoes); // Declaração da função;

int main()
{
	printf("Olá, bem vindo ao Movedor de Elementos de um Array!!!\n");
	int tamanhoArray; // Armazenar o tamanho do array enviado pelo usuário;
	int posicoes; // Armazenar o número de posições que o array irá se mover;

	printf("\nInsira o tamanho do array: ");
	scanf("%d", &tamanhoArray);

	int array[tamanhoArray]; // Cria o array baseado no valor que o usuario colocou anteriormente;

	printf("\n");

	for (int i = 0; i < tamanhoArray; i++ ) // Loop for simples baseado no tamanho do array;
	{
		printf("Array [%d]: ", i);
		scanf("%d", (array + i)); // Armazenar as informações no array de forma sequencial;
	}

	printf("\nEste foi o array criado:\n");

	for (int i = 0; i < tamanhoArray; i++ )
		printf("\nArray [%d] = %d", i, array[i]); // Imprime o Array;

	printf("\n\nQuantas posições deseja mover? ");
	scanf("%d", &posicoes); // Armazena quantas posições serão movidas;


	mover(array, tamanhoArray, posicoes); // Execução da função;

	printf("\nAqui está o resultado:\n");

	for (int i = 0; i < tamanhoArray; i++ )
		printf("\nArray [%d] = %d", i, array[i]); // Imprime o Array pós mudanças;

	printf("\n");

	return 0;

}

void mover(int *parray, int tamanhoArray, int posicoes) // Definição da função;
{

    int i;
    int arrayTemp[tamanhoArray];

    posicoes = posicoes % tamanhoArray; // Pega o resto da divisão do número de posições a mover pelo tamanho do array de forma que caso o número de posições a mover seja maior que o array, ele normalize para um número menor mas que tenha mesma proporção;

    for ( i = 0; i < tamanhoArray; i++ )
        arrayTemp[i] = parray[(i + posicoes) % tamanhoArray];

    for ( i = 0; i < tamanhoArray; i++ )
        parray[i] = arrayTemp[i];

}
