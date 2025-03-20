/*
	11. Crie uma função que calcule a soma de todos os elementos em um array de inteiros usando
	ponteiros para travessia de array.
	Dica: use um ponteiro para percorrer a matriz e acompanhar a soma
*/

#include <stdio.h>

void soma_valores(int tamanho,int *array); // Declaração da Função antes da main;

int main(void)
{
	int tamanho; // Variável para armazenar o tamanho do Array que o usuário enviará;

	printf("Olá, bem vindo ao Somador de Arrays, me dê o tamanho do array e seus elementos que eu irei soma-los!!!\n");
	printf("Primeiramente, me diga qual será o tamanho dele: ");

	scanf("%d",&tamanho); // Armazenar o valor na variável tamanho;

	int array[tamanho], *parray; // Criação do Array com o tamanho enviado e do ponteiro;

	printf("Okay, agora vamos preencher esse array, vá mandando os valores do array que eu irei armazena-los!!!");

	for(int i = 0;i < tamanho;i++) // Loop for simples para pegar os valores que o usuário for digitando e armazena-los no Array;
	{
		scanf("%d",&array[i]); // Preenchimento do Array baseado no i atual do Loop;
	}

	parray = array; // Definir o ponteiro para o Array criado e preenchido;

	printf("Vamos calculas a soma dos elementos deste array que você passou!!!");

	soma_valores(tamanho,parray); // Uso da função usando o tamanho do array e o ponteiro como argumentos;

	printf("Receba o resultado, é de %d",*parray); // Impressão do resultado;

	return 0;
}

void soma_valores(int tamanho,int *array) // Definição da função;
{
	int armazena = 0; // Variável para ir armazenando as somas;

	for(int i = 0; i < tamanho; i++) // Loop for que soma a variável armazena com o valor inserido no array no i repetidas vezes, até chegar no tamanho máximo do array;
	{
		armazena += array[i]; // Somatorio simples;
	}

	*array = armazena; // Iguala o valor do ponteiro ao valor de armazena;
}
