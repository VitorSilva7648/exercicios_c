#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que receba um valor inteiro n, e em seguida, aloca dinamicamente
duas matrizes A e B em R n×n e retorna o resultado de C = A × B onde l1 e c1 indicam o número de linhas e colunas 
da matriz A e l2 e c2 indicam o número de linhas e colunas da matriz B.
*/

int **multiplicaMatrizes(int **A, int **B, int n) {
    int **mult = malloc(n * sizeof(int *));
    int i,j,k;
    for (i = 0; i < n; i++) {
        mult[i] = malloc(n * sizeof(int));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mult[i][j] = 0; // Inicializa com zero

            for (k = 0; k < n; k++) {
                mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    return mult;
}

int main(void) {
    int n,i,j;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero de linhas e colunas invalido!");
        return 1;
    }

    int **matriz1 = malloc(n * sizeof(int *));
    int **matriz2 = malloc(n * sizeof(int *));
    
    for (i = 0; i < n; i++) {
        matriz1[i] = malloc(n * sizeof(int));
        matriz2[i] = malloc(n * sizeof(int));
    }

    printf("Matriz 1:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Posição %d%d: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Matriz 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Posição %d%d: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    int **matrizResultado = multiplicaMatrizes(matriz1, matriz2, n);

    printf("Matriz resultante:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada para as matrizes
    for (i = 0; i < n; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matrizResultado[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matrizResultado);

    return EXIT_SUCCESS;
}
