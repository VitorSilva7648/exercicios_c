#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que receba 2 matrizes n × n, mostre-as na tela e retorne outra
matriz com a soma das duas matrizes. Use alocação dinâmica de memória.
onde l1 e c1 indicam o número de linhas e colunas da matriz A e l2 e c2 indicam o
número de linhas e colunas da matriz B.
*/

int **somaMatriz(int **A, int **B, int n) {
    int **soma = malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        soma[i] = malloc(n * sizeof(int));
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma[i][j] = A[i][j] + B[i][j];
        }
    }
    return soma;
}

int main(void) {
    int n;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero de linhas invalido!");
        return 1;
    }

    int **matriz1 = malloc(n * sizeof(int *));
    int **matriz2 = malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        matriz1[i] = malloc(n * sizeof(int));
        matriz2[i] = malloc(n * sizeof(int));
    }

    printf("Matriz 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Posição %d%d: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Matriz 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Posição %d%d: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    int **matrizSoma = somaMatriz(matriz1, matriz2, n);

    printf("Matriz Soma:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
//Libera a memória alocada para as matrizes
    for (int i = 0; i < n; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matrizSoma[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matrizSoma);

    return EXIT_SUCCESS;
}
