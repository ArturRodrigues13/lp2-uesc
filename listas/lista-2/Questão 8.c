/*
	8. Escreva um programa que use uma matriz de structs para armazenar informações sobre alunos
	(nome, ID, CR) e uma função que encontre o aluno com o maior CR usando ponteiros.
	Dica: Use um ponteiro para acompanhar o aluno com o maior CR.
*/

#include <stdio.h>

struct dados // Criação do Struct antes da main e da função, para evitar conflitos e erros no compilador;
{
	char nome[100]; // Variável para armazenar o nome dos alunos;
	int ID; // Variável para armazenar o ID dos alunos;
	float CR; // Variável para armazenar o CR dos alunos;
};

void Acha_Maior_CR(int quantidade, struct dados *pSistema); // Declaração da função;

int main(void)
{
	printf("Olá, bem vindo ao Sistema de Aluno do CETEP!!!\n");
	int quant; // Armazenar quantos alunos serão colocados no sistema;

	printf("Vamos adicionar alguns alunos aqui, quantos você deseja colocar? ");
	scanf("%d",&quant); // Atribui a quantidade de alunos a variável quant;

	struct dados sistema[quant]; // Criação da matriz que acessa o struct;

	printf("Okayyy, agora precisamos colocas as informações desses alunos, vamos lá!\n");

	for (int i = 0;i < quant;i++) // Loop for para ir preenchendo o Struct com informações;
	{
		printf("Me diga o Nome do Aluno ");
		scanf(" %99[^\n]%*c",sistema[i].nome); // Atribui a informação ao aluno atual, ou o aluno i;
		printf("Agora o seu ID: ");
		scanf("%d",&sistema[i].ID); // Atribui a informação ao aluno atual, ou o aluno i;
		printf("Agora o seu CR: ");
		scanf("%f",&sistema[i].CR); // Atribui a informação ao aluno atual, ou o aluno i;

		printf("Boa, %d já foi(foram)\n",i + 1); // Impressão apenas para mostrar como anda o preenchimento de informações;
	}

	struct dados *pSistema = sistema; // Cria um ponteiro que acessa a Struct e o aponta para a outra variável de acesso;

	Acha_Maior_CR(quant,pSistema); // Execução da função usando a quantidade de alunos e o ponteiro como argumentos;

	return 0;
}


void Acha_Maior_CR(int quantidade, struct dados *pSistema) // Definição da função;
{
	float maior = pSistema[0].CR; // Criação de variável que armazenará o maior CR e o define como o CR do primeiro aluno, já que inicialmente ele é o maior;

	int guarda = 0; // Variável para armazenar qual é esse aluno com o maior CR;

	for (int i = 0; i < quantidade; i++) // Loop for simples para achar o maior CR
	{
		if(pSistema[i].CR > maior) // if simples que tem como checagem se o CR do aluno do i atual tem um CR maior que o anteriormente armazenado;
		{
			maior = pSistema[i].CR; // Atualiza o valor de maior para o CR do aluno atual;
			guarda = i; // Guarda qual é esse aluno;
		}
    }

	printf("\nMuito bem, aqui está o aluno com o maior CR dentro do sistema:\n");

	printf("Nome: %s\n", pSistema[guarda].nome); // Impressão da informação contida no aluno de maior CR , usando a matriz para acessar o struct, dando como referência desse aluno a variável guarda;

    printf("ID: %d\n", pSistema[guarda].ID); // Impressão da informação contida no aluno de maior CR , usando a matriz para acessar o struct, dando como referência desse aluno a variável guarda;

    printf("CR: %.2f\n", pSistema[guarda].CR); // Impressão da informação contida no aluno de maior CR , usando a matriz para acessar o struct, dando como referência desse aluno a variável guarda;
}
