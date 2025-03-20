/*
	12. Implemente uma função que inverta uma string dada usando ponteiros.
	Use dois ponteiros — um no início e um no final — para trocar os caracteres até que eles se
	encontrem no meio.
*/

#include <stdio.h>

void inverte(char *inicio,char *final,int tamanho); // Declaração da função;

int main(void)
{
	printf("Olá, bem vindo ao Inversor de Strings, me dê um texto que vou inverte-lo de uma forma muito complicada!!!\n");

	char texto[100]; // Variável para armazenar a string que o usuário enviará;
	int armazena = 0; // Variável que armazenará o tamanho da string;
	printf("Digite uma string: ");
    scanf("%99[^\n]%*c",texto); // Pegar a string (Que código útil, nossa senhora, valeu fessor);


	char *pini = texto; // Ponteiro apontando para o inicio da string;
	char *pfim = texto; // Ponteiro que inicialmente aponta para o inicio da string;

	while(*pfim != '\0') // While simples para descobrir o tamanho da string e ir deslocando o ponteiro até lá;
	{
		armazena ++;
		pfim++;
	}

	pfim--; // Diminuo 1 do while pois o While só está sendo cumprido quando pfim = \0, o que não queremos que entre em nossa conta;

	inverte(pini,pfim,armazena); // Execução da função com os ponteiros inicial e final e o tamanho da string;

	printf("Sua String invertida é: ");
	for (int i = 0;i < armazena;i++) // Loop for simples para imprimir a string invertida;
	{
		printf("%c",texto[i]); // Impressão sequencial da string;
	}

	return 0;

}

void inverte(char *inicio,char *final,int tamanho) // Definição da função;
{
	char guarda; // Variável para guardar o caractere enquanto fazemos as trocas, analogia do copo apenas!!!;

	for (int i = 0; i < tamanho / 2;i++) // Loop for simples baseado no tamanho da string dividido por 2, pois só fazemos a troca até chega na metade da string;
	{
		guarda = *inicio; // Guardo o caractere mais de inicio;
		*inicio = *final; // Faço o caractere mais no inicio ser o mais no final;
		*final = guarda; // Faço o final ser o que foi armazenado anteriormente;

		inicio++; // Avanço o ponteiro mais no inicio para ir para o próximo caractere;
		final--; // Retorno o ponteiro mais no final para voltar para o caractere anterior;
	}
}
