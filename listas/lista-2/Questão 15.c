/*
	15. Implemente um programa para adicionar dois polinômios usando structs para representar cada
	polinômio e ponteiros para manipulação.
	Dica: Defina uma struct para representar um termo polinomial com coeficiente e expoente. Use
	arrays dessas structs para representar polinômios e implemente uma função para adicionar dois
	polinômios.
*/

#include <stdio.h>

#define MAX_TERMS 100

// Definindo a struct para representar um termo do polinômio
struct Termo
{
    int coeficiente;
    int expoente;
};

// Função para adicionar dois polinômios
void adicionaPolinomios(struct Termo p1[], int n1, struct Termo p2[], int n2, struct Termo resultado[], int *nResultado)
{
    int i = 0, j = 0, k = 0;

    // Percorrer os dois polinômios
    while (i < n1 && j < n2) {
        if (p1[i].expoente == p2[j].expoente) {
            // Se os expoentes forem iguais, somamos os coeficientes
            resultado[k].expoente = p1[i].expoente;
            resultado[k].coeficiente = p1[i].coeficiente + p2[j].coeficiente;
            i++;
            j++;
        } else if (p1[i].expoente > p2[j].expoente) {
            // Se o expoente do p1 for maior, adicionamos o termo de p1
            resultado[k] = p1[i];
            i++;
        } else {
            // Se o expoente do p2 for maior, adicionamos o termo de p2
            resultado[k] = p2[j];
            j++;
        }
        k++;
    }

    // Se ainda restarem termos no polinômio 1
    while (i < n1) {
        resultado[k++] = p1[i++];
    }

    // Se ainda restarem termos no polinômio 2
    while (j < n2) {
        resultado[k++] = p2[j++];
    }

    *nResultado = k; // Atualizar o tamanho do resultado
}

// Função para imprimir o polinômio
void imprimePolinomio(struct Termo p[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d*x^%d", p[i].coeficiente, p[i].expoente);
        if (i != n - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main()
{
    struct Termo p1[MAX_TERMS] = {{3, 4}, {2, 3}, {1, 0}};  // Polinômio 1: 3x^4 + 2x^3 + 1
    struct Termo p2[MAX_TERMS] = {{5, 3}, {2, 2}, {1, 0}};  // Polinômio 2: 5x^3 + 2x^2 + 1

    struct Termo resultado[MAX_TERMS];
    int nResultado;

    // Adiciona os dois polinômios
    adicionaPolinomios(p1, 3, p2, 3, resultado, &nResultado);

    // Imprime o resultado
    printf("Resultado da soma dos polinomios: ");
    imprimePolinomio(resultado, nResultado);

    return 0;
}
