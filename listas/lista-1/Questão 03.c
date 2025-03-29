/*
Artur Rodrigues Santos
Lista I - Questão 03

Encontre o elemento máximo de um vetor usando ponteiros.

-> Crie a função find_max() - parâmetros: ponteiro para inteiro e tamanho do vetor;

-> use um laço para buscar o maior_elemento valor do vetor, usando ponteiros.
*/

#include <stdio.h>

int find_max(int *parray, int tamanho); // Declaração da função que pega o valor máximo;

int main() {


	int tamanho; // Variável para armazenar o tamanho do Array que será criado;

	printf("Bora pegar o maior_elemento elemento de um Array com Ponteiros!");
	printf("\nMe dê o tamanho do array que iremos criar: ");

	scanf("%d",&tamanho); // Pegar o valor digitado pelo usuário;

	int vetor[tamanho]; // Declara o Array com o tamanho previamente designado;

	for (int i = 0; i < tamanho; i++) { // Loop para prencher o Array;

		printf("\nMe dê o elemento %d do seu Array: ",i + 1); // Feedback visual para o usuário;
		scanf("%d",&vetor[i]);

	}

	int maior_elemento = find_max(vetor,tamanho);  // Chama a função com os argumentos válidos e passa o valor para uma variável;

	printf("O maior elemento do vetor que você digitou é: %d",maior_elemento); // Exibe o resultado para o usuário;

	return 0;
}

int find_max(int *parray, int tamanho) {

	int maior_elemento = *parray; // Define o maior_elemento valor como o primeiro elemento do Array;

	for (int i = 0; i < tamanho; i++) {

		if (maior_elemento < *(parray + i)) // Se o elemento de checagem atual for maior_elemento que o outro previamente estabelecido;
			maior_elemento = *(parray + i); // O novo elemento maior_elemento será esse encontrado;

	}

	return maior_elemento; // Retorna o maior_elemento valor do Array;

}
