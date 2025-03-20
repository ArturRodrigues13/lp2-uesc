/*
	4. Passe uma Struct para uma Função por Referência.
	Crie uma struct Rectangle com largura e altura, então escreva uma função que calcule a área. Passe
	o retângulo por referência.
*/

#include <stdio.h>

double calcula(double largura, double altura); // Declaração da função;

int main(void)
{
	printf("Olá, bem vindo ao Calculador de Área de Retângulos com Struct!!!\n");

	struct valores // Criação do Struct
	{
		double largura; // Variavel para armazenar a largura do retângulo;
		double altura; // Variavel para armazenar a altura do triângulo;
	};

	struct valores retangulo; // Criação da variavel que acessa o Struct;

	printf("Vamos lá, primeiramente me passe a Largura desse retângulo: ");
	scanf("%le",&retangulo.largura); // Pegar o valor digitado pelo usuário e atribui-lo ao struct através da variável de acesso;
	printf("Agora a altura dele: ");
	scanf("%le",&retangulo.altura);// Pegar o valor digitado pelo usuário e atribui-lo ao struct através da variável de acesso;

	double area = calcula(retangulo.largura,retangulo.altura); // Cria uma variável e atribui a ela o resultado da função;

	printf("Okayyy, a area do retanculo %gx%g que você me passou é de: %.2f",retangulo.largura,retangulo.altura,area); // Imprimir o resultado usando o struct como referência;

	return 0;
}

double calcula(double largura, double altura) // Definição da função;
{
	double area = largura * altura; // Calcula a área baseado nos argumentos de largura e altura;

	return area; // Retorna a área;
}
