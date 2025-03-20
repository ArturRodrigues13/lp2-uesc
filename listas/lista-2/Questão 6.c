/*
	6. Crie uma função que calcule o comprimento de uma string usando aritmética de ponteiros.
	Dica: Use aritmética de ponteiros para encontrar a diferença entre o fim e o início da string.
*/

#include <stdio.h>

int calcula_comprimento(char *str); // Declaração da Função antes da main;

int main(void) {
	printf("Olá, bem vindo ao calculador de comprimento de string!!!\n");
    char str[100]; // Variável para armazenar a string que o usuário enviará;
    printf("Digite uma string: ");
    scanf("%99[^\n]%*c",str); // Pegar a string (Que código útil da porra, valeu fessor);

    int comprimento = calcula_comprimento(str); // Cria uma variável e atribui a ela o resultado da função;

    printf("O comprimento da string é: %d\n", comprimento); // Imprime o resultado na tela;

    return 0;
}

int calcula_comprimento(char *str) // Definição da função;
{
    char *inicio = str; // Ponteiro para o início da string

    while (*str != '\0') // Avança até encontrar o caractere de término da string
	{
        str++;
    }

    return (str - inicio); // Diferença entre o fim e o início da string
}
