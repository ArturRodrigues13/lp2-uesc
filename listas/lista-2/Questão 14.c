/*
	14. Escreva uma função para multiplicar duas matrizes usando ponteiros para travessia eficiente.
	Dica: Use ponteiros para navegar pelas matrizes e executar a operação de multiplicação linha por
	coluna.
*/

#include <stdio.h>

// Função para multiplicar duas matrizes
void multiplicaMatrizes(int *a, int *b, int *c, int linhasA, int colunasA, int colunasB)
{
    for (int i = 0; i < linhasA; i++)
	{
        for (int j = 0; j < colunasB; j++)
		{
            *(c + i * colunasB + j) = 0; // Inicializa o elemento C[i][j] a 0
            for (int k = 0; k < colunasA; k++)
			{
                *(c + i * colunasB + j) += *(a + i * colunasA + k) * *(b + k * colunasB + j);
            }
        }
    }
}

// Função para imprimir uma matriz
void imprimeMatriz(int *matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
	{
        for (int j = 0; j < colunas; j++)
		{
            printf("%d ", *(matriz + i * colunas + j));
        }
        printf("\n");
    }
}

int main()
{
	printf("Olá, bem vindo ao Multiplicador de Matrizes, vamos fazer uns cálculos!!!");

    // Dimensões das matrizes
    int linhasA, colunasA , colunasB;
	printf("\nDê um valor de tamanho para as linhas de suas matrizes, que precisam ser iguais: ");
	scanf("%d",&linhasA);
	printf("Agora me mande o número de colunas de matriz 1: ");
	scanf("%d",&colunasA);
	printf("Agora me mande o número de colunas de matriz 2: ");
	scanf("%d",&colunasB);

	int matriz_1[linhasA][colunasA]; // Criação da primeira matriz com os valores previamente enviados;
	int matriz_2[linhasA][colunasB]; // Criação da segunda matriz com os valores previamente enviados;
	int matriz_3[linhasA][linhasA]; // Criação da terceira matriz baseado em como o resultado se forma, matematicamente falando;

	printf("Okay, agora vamos preencher essas matrizes, vá mandando os valores da primeira matriz que eu irei armazena-los!!!\n");

	for (int i = 0; i < linhasA; i++) // Primeiro Loop for baseado na primeira dimensão da primeira matriz;
	{
		for (int j = 0;j < colunasA; j++) // segundo Loop for baseado na segunda dimensão da segunda matriz;
		{
			printf("Valor %d da linha %d: ",j + 1,i + 1); // Impressão do valor atual para o usuário ter um feedback visual;
			scanf("%d",&matriz_1[i][j]); // Adicionar o valor na matriz no i e no j atual
		}
	}

	printf("Agora os da segunda matriz!!!\n");

	for (int i = 0; i < linhasA; i++)// Primeiro Loop for baseado na primeira dimensão da primeira matriz;
	{
		for (int j = 0;j < colunasB; j++)// segundo Loop for baseado na segunda dimensão da segunda matriz;
		{
			printf("Valor %d da linha %d: ",j + 1,i + 1); // Impressão do valor atual para o usuário ter um feedback visual;
			scanf("%d",&matriz_2[i][j]); // Adicionar o valor na matriz no i e no j atual
		}
	}

    // Multiplica as matrizes
    multiplicaMatrizes((int *)matriz_1, (int *)matriz_2, (int *)matriz_3, linhasA, colunasA, colunasB);

    // Imprime o resultado
    printf("Resultado da multiplicacao:\n");
    imprimeMatriz((int *)matriz_3, linhasA, colunasB);

    return 0;
}
