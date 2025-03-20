/*
	13. Defina uma struct para representar um livro com campos como título, autor e ano. Crie uma
	matriz de structs de livros e imprima detalhes.
	Dica: Crie uma matriz de structs, preencha os campos de cada struct e itere pela matriz para
	imprimir os detalhes.
*/

#include <stdio.h>

int main(void)
{
	int quant; // Variável para armazenar a quantidade de livros que o usuário enviará;
	printf("Olá, bem vindo a Coleção de Livros com Struct!!!\n");
	struct livro // Criação da Struct;
	{
		char titulo[100]; // Variável para armazenar o título do livro;
		char autor[100]; // Variável para armazenar o autor do livro;
		int ano; // Variável para armazenar o ano de publicação do livro;
	};

	printf("Vamos colocar alguns livros aqui, quantos você deseja colocar? ");
	scanf("%d",&quant); // Pega o valor e o atribui a variável quant;

	struct livro colecao[quant]; // Criação da variável que acessa o Struct, sendo ela uma Matriz do tamanho da quantidade de livros;

	printf("Okayyy, agora precisamos colocas as informações desses livros, vamos lá!\n");

	for (int i = 0;i < quant;i++) // Loop for para ir preenchendo o Struct com informações;
	{
		printf("Me diga o Titulo: ");
		scanf(" %99[^\n]%*c",colecao[i].titulo); // Atribui a informação ao livro atual, ou o livro i;
		printf("Agora o Autor: ");
		scanf(" %99[^\n]%*c",colecao[i].autor); // Atribui a informação ao livro atual, ou o livro i;
		printf("Agora o ano de publicação: ");
		scanf("%d",&colecao[i].ano); // Atribui a informação ao livro atual, ou o livro i;

		printf("Boa, %d já foi(foram)\n",i + 1); // Impressão apenas para mostrar como anda o preenchimento de informações;
	}

	printf("\nOkayyy, você formou uma ótima coleção aqui, vamos ver como ficou?");

	for (int i = 0; i < quant; i++) // Loop for simples para imprimir a "biblioteca" que o usuário montou;
	{
		printf("\n");
		printf("\nTítulo do Livro: %s",colecao[i].titulo); // Impressão da informação contida no livro i, usando a matriz para acessar o struct;
		printf("\nAutor do Livro: %s",colecao[i].autor); // Impressão da informação contida no livro i, usando a matriz para acessar o struct;
		printf("\nAno de Publicação: %d",colecao[i].ano); // Impressão da informação contida no livro i, usando a matriz para acessar o struct;
	}

	printf("\n\nEis aí a coleção que você fez, ficou do Balacobaco!!!");

	return 0;
}
