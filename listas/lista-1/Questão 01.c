/*
Artur Rodrigues Santos
Lista I - Questão 01

Use ponteiros para trocar (swap) os valores de dois inteiros (duas variáveis int).

-> Crie a função swap();

	- troque os conteúdos dos endereços recebidos da função chamadora (main);

-> Na main():

	- declare duas variáveis int e atribua valores a elas (via scanf);

	- mostre (via printf) os valores das variáveis antes e depois de chamar a função swap().
*/

#include <stdio.h>

void swap(int *pa, int *pb); // Declaração da Funcão;

int main() {

	int varA, varB; // Variáveis para armazenar os valore que iremos trocar;

	int *pa = &varA; // Ponteiro que aponta para o endereço da primeira variável;
	int *pb = &varB; // Ponteiro que aponta para o endereço da segunda variável;

	printf("Okay, vamos inverter dois inteiros usando ponteiros!\n");
	printf("\nMe dê um valor para VarA: ");
	scanf("%d",&varA); // Pegar valor de varA
	printf("\nMe dê um valor para VarB: ");
	scanf("%d",&varB); // Pegar valor de varB

	printf("\nPerfeito, antes de fazer a inversão: VarA = %d e VarB = %d",varA,varB);

	swap(pa,pb); // Chamada da função usando os ponteiros como argumento;

	printf("\n\nIncrível, após realizar nossa troca: VarA = %d e VarB = %d\n",varA,varB);

	return 0;
}


void swap(int *pa, int *pb) { // Definição da função;

	int c; // Variável extra para auxiliar na troca;

	c = *pa;
	*pa = *pb;
	*pb = c;

}
