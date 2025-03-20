/*
	10. Escreva um programa que simule um sistema simples de gerenciamento de estoque usando uma
	matriz de estruturas e ponteiros, com funções para adicionar, remover e atualizar itens. Dica: use
	uma matriz de structs para armazenar itens de inventário e implementar funções para manipular o
	inventário.
*/

struct loja // Definição do Struct antes da main para organizar os itens da loja.
{
	char nome[100]; // Variável para armazenar o nome dos itens.
	int ID; // Variável para armazenar o ID dos itens.
	float preco; // Variável para armazenar o preço dos itens.
};

#include <stdio.h>

// Declaração das funções de manipulação do sistema de loja.
void adiciona(int itens_ad, int *itens, struct loja *psistema);
void remover(int remove, int *itens, struct loja *psistema);
void atualiza(int quantos, int IDs[quantos], int *itens, struct loja *psistema);

int main(void)
{
	printf("Olá, bem vindo ao Sistema de Estoque do Meira!!!\n");
	int quant = 100; // Define o limite total de itens que o sistema pode armazenar.
	int itens, *pitens; // 'itens' armazena o número de itens; 'pitens' é um ponteiro para 'itens'.

	pitens = &itens; // Ponteiro 'pitens' aponta para a variável 'itens'.

	printf("Vamos colocar alguns itens aqui, quantos você deseja colocar? ");
	scanf("%d", &itens); // Atribui a quantidade inicial de itens fornecida pelo usuário.

	struct loja sistema[quant]; // Cria um array de structs 'sistema' para armazenar os itens.

	printf("Okayyy, agora precisamos colocar as informações desses itens, vamos lá!\n");

	for (int i = 0; i < itens; i++) // Loop para preencher o struct com os dados dos itens.
	{
		printf("Me diga o Nome do Item: ");
		scanf(" %99[^\n]%*c", sistema[i].nome); // Recebe o nome do item.
		sistema[i].ID = 1000 + i; // Gera um ID único para cada item.
		printf("Agora o Preço: ");
		scanf("%f", &sistema[i].preco); // Recebe o preço do item.

		printf("Boa, %d já foi(foram)\n", i + 1); // Mostra progresso do preenchimento.
	}

	struct loja *psistema = sistema; // Cria um ponteiro que aponta para o array de structs 'sistema'.

	printf("OKAYYY, essa é o estoque atual!!!\n");

	// Loop para imprimir todos os itens adicionados.
	for (int i = 0; i < itens; i++)
	{
		printf("\nNome do Item: %s", sistema[i].nome);
		printf("\nID do Item: %d", sistema[i].ID);
		printf("\nPreço do Item: %.2f\n", sistema[i].preco);
	}

	int resp = 1; // Variável de controle para o menu de opções.

	// Loop para o menu de ações (adicionar, remover ou atualizar itens).
	while (resp != 0)
	{
		printf("\nO que você deseja fazer agora?\n0 = Encerrar programa\n1 = Adicionar item\n2 = Remover um item\n3 = Atualizar Itens\n\n");
		scanf("%d", &resp);

		if (resp == 1)
		{
			int itens_ad;
			printf("\nAdicionar item. Quantos itens serão adicionados?");
			scanf("%d", &itens_ad); // Recebe a quantidade de itens a adicionar.
			adiciona(itens_ad, pitens, psistema); // Chama a função para adicionar itens.
		}
		if (resp == 2)
		{
			int remove;
			printf("\nRemover um item. Digite o ID do item a ser removido: ");
			scanf("%d", &remove); // Recebe o ID do item a ser removido.
			remover(remove, pitens, psistema); // Chama a função para remover itens.
		}
		if (resp == 3)
		{
			int quantos;
			printf("\nAtualizar Itens. Quantos itens deseja atualizar?");
			scanf("%d", &quantos); // Recebe a quantidade de itens a atualizar.
			int IDs[quantos]; // Cria um array para armazenar os IDs dos itens a atualizar.

			for (int i = 0; i < quantos; i++) // Recebe os IDs dos itens a serem atualizados.
			{
				printf("\nDigite o ID: ");
				scanf("%d", &IDs[i]);
			}
			atualiza(quantos, IDs, pitens, psistema); // Chama a função para atualizar itens.
		}
	}
}

// Função para adicionar novos itens ao sistema.
void adiciona(int itens_ad, int *itens, struct loja *psistema)
{
	for (int i = *itens; i < itens_ad + *itens; i++) // Loop para preencher o struct com os novos itens.
	{
		printf("Me diga o Nome do Item: ");
		scanf(" %99[^\n]%*c", psistema[i].nome); // Recebe o nome do item.
		psistema[i].ID = 1000 + i; // Gera um ID único.
		printf("Agora o Preço: ");
		scanf("%f", &psistema[i].preco); // Recebe o preço do item.

		printf("Boa, %d já foi(foram)\n", i + 1); // Mostra progresso do preenchimento.
	}

	*itens += itens_ad; // Atualiza o número total de itens.

	// Loop para imprimir todos os itens adicionados.
	for (int i = 0; i < *itens; i++)
	{
		printf("\nNome do Item: %s", psistema[i].nome);
		printf("\nID do Item: %d", psistema[i].ID);
		printf("\nPreço do Item: %.2f\n", psistema[i].preco);
	}
}

// Função para remover itens do sistema.
void remover(int remove, int *itens, struct loja *psistema)
{
	int guarda;
	for (int i = 0; i < *itens; i++)
	{
		if (psistema[i].ID == remove) // Verifica se o ID corresponde ao item a ser removido.
		{
			for (int j = i; j < *itens - 1; j++) // Move todos os itens após o removido para frente.
			{
				guarda = psistema[j].ID;
				psistema[j] = psistema[j + 1]; // Substitui o item removido pelo próximo.
				psistema[j].ID = guarda; // Mantém os IDs únicos em sequência.
			}
			(*itens)--; // Reduz o total de itens após a remoção.
			break;
		}
	}

	// Loop para imprimir todos os itens restantes.
	for (int i = 0; i < *itens; i++)
	{
		printf("\nNome do Item: %s", psistema[i].nome);
		printf("\nID do Item: %d", psistema[i].ID);
		printf("\nPreço do Item: %.2f\n", psistema[i].preco);
	}
}

// Função para atualizar itens no sistema.
void atualiza(int quantos, int IDs[quantos], int *itens, struct loja *psistema)
{
	for (int i = 0; i < quantos; i++) // Loop para cada item a ser atualizado.
	{
		for (int j = 0; j < *itens; j++) // Verifica se o ID do item corresponde a um dos fornecidos.
		{
			if (psistema[j].ID == IDs[i])
			{
				printf("Item encontrado: %s (ID: %d). Atualize as informações:\n", psistema[j].nome, psistema[j].ID);
				printf("Me diga o Nome do Item: ");
				scanf(" %99[^\n]%*c", psistema[j].nome); // Recebe o novo nome do item.
				printf("Agora o Preço: ");
				scanf("%f", &psistema[j].preco); // Recebe o novo preço do item.
				break;
			}
		}
	}

	// Loop para imprimir todos os itens após a atualização.
	for (int i = 0; i < *itens; i++)
	{
		printf("\nNome do Item: %s", psistema[i].nome);
		printf("\nID do Item: %d", psistema[i].ID);
		printf("\nPreço do Item: %.2f\n", psistema[i].preco);
	}
}
