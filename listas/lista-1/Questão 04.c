/*
Artur Rodrigues Santos
Lista I - Questão 04

Compute o tamanho de uma string com o uso de ponteiros.

-> a função str_length() tem um ponteiro para char como parâmetros e retorna o tamanho da
string;

-> use um laço para percorrer a string, usando ponteiros;

-> Na main() - crie a string via scanf e imprima a quantidade de caracteres.
*/

#include <stdio.h>

int str_lenght(char *pchar); // Declaração da função que pega o tamanho da String;

int main() {

	int tamanho; // Variável para armazenar o tamanho da String;
	char texto[100]; // Declaração do Char com limite de 100 Caracteres;

	printf("Beleza, vou calcular o tamanho da String que você digitar aí!\n");
	printf("Me passa um texto (limite 100 caracteres) para eu calcular seu tamanho: ");

	scanf(" %99[^\n]%*c",texto); // Código Super útil que só vai ler o primeiros 100 Caracteres digitados;

	tamanho = str_lenght(texto); // Chama a Função e atribui o valor à uma variável;

	printf("\nO tamanho da String que você digitou é: %d",tamanho); // Exibe o resultado para o usuário;

	return 0;

}

int str_lenght(char *pchar) {

	int tamanho = 0; // Armazenar o tamanho do Array

	while (*pchar != '\0') // Avança até encontrar o caractere de término da string
	{
        pchar++; // Avança para o próximo indíce da String com o ponteiro;
		tamanho++; // Acrescenta no tamanho da String;
    }

	return tamanho; // Retorna o comprimento total;

}
