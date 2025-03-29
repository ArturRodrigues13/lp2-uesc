/*
Artur Rodrigues Santos
Lista I - Questão 05

Reverter um array usando ponteiros.

-> crie a função inverte – parâmetros: ponteiro para int e tamanho do array;

-> use ponteiros para realizar as trocas dos elementos do array;

-> na main(), cria um array via scanf, chame a função inverte, mostre o array invertido.
*/

#include <stdio.h>

void inverte(int *parray, int tamanho); // Declaração da função que inverte o Array;

int main() {

	int tamanho; // Variável para armazenar o tamanho do Array que será criado;

	printf("Bora inverter um Array com Ponteiros!");
	printf("\nMe dê o tamanho do array que iremos criar: ");

	scanf("%d",&tamanho); // Pegar o valor digitado pelo usuário;

	int vetor[tamanho]; // Declara o Array com o tamanho previamente designado;

	for (int i = 0; i < tamanho; i++) { // Loop para prencher o Array;

		printf("\nMe dê o elemento %d do seu Array: ",i + 1); // Feedback visual para o usuário;
		scanf("%d",&vetor[i]);

	}

	inverte(vetor, tamanho); // Chama a função com os parâmetros válidos para inverter o Array;



	printf("\nMuito bem, aqui está seu Array: \n");

	for (int i = 0; i < tamanho; i ++) { // Loop simples que vai de 0 até o tamanho do array;

		printf("\nArray[%d] = %d\n",i,vetor[i]); // Exibição do valor para o usuário;

	}

	return 0;

}

void inverte(int *parray, int tamanho) { // Definição da função;

	int c; // Variável para armazenar um elemento e ajudar na troca;

	for (int i = 0; i < tamanho / 2; i++) { // Realiza trocas até chegar na metade do Array;

		c = *(parray + i); // C = Primeiro elemento + i;

		*(parray + i) = *(parray + tamanho - 1 - i); // Primeiro elemento = Último elemento - 1 (pois Array começam no 0) - i;

		*(parray + tamanho - 1 - i) = c; // Último elemento - 1 - i = C (ou seja, o primeiro elemento + i);

	}

}
