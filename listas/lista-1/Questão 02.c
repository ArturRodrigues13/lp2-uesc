/*
Artur Rodrigues Santos
Lista I - Questão 02

Use ponteiros para ler e mostrar os elementos de um array (vetor).

-> Crie a função in_arr(), que tem como parâmetros um ponteiro para inteiros e o tamanho do
array;

	- Crie um loop (laço) para preencher os valores no array usando ponteiros;

-> Crie a função out_arr() com os mesmos parâmetros da in_arr(), para mostrar o array usando
ponteiros;

-> Na main():

	- declare um array de inteiros;

	- chame as funções in_arr e out_arr.
*/

#include <stdio.h>

void in_arr(int *parray,int tamanho); // Declaração da função que preenche o Array;

void out_arr(int *parray,int tamanho); // Declaração da função que exibe o Array;

int main() {

	int tamanho; // Variável para armazenar o tamanho do Array que será criado;

	printf("Bora criar um Array de inteiros com ponteiros!");
	printf("\nMe dê o tamanho do array que iremos criar: ");

	scanf("%d",&tamanho); // Pegar o valor digitado pelo usuário;

	int array[tamanho]; // Declara o Array com o tamanho previamente designado;

	in_arr(array,tamanho); // Chama a função com os argumentos válidos;

	out_arr(array,tamanho); // Chama a função com os argumentos válidos;

}

void in_arr(int *parray,int tamanho) { // Definição da função;

	for (int i = 0; i < tamanho; i++) { // Loop simples que vai de 0 até o tamanho do array;

		printf("\nMe dê o elemento %d do seu Array: ",i + 1); // Feedback visual para o usuário;

		scanf("%d",parray + i); // Inserção do valor no endereço de memória, somando i cada vez que o loop roda;

	}

}

void out_arr(int *parray,int tamanho) { // Definição da função;

	printf("\nMuito bem, aqui está seu Array: \n");

	for (int i = 0; i < tamanho; i ++) { // Loop simples que vai de 0 até o tamanho do array;

		printf("\nArray[%d] = %d\n",i, *(parray + i)); // Exibição do valor para o usuário, usando * para pegar o valor contido no endereço passado somando i com parênteses para gatantir que a soma seja feita antes de pegar o valor;

	}

}
