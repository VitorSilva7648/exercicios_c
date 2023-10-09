#include <stdio.h>

/*Escreva um programa em C que leia um valor inteiro n, e em seguida, leia duas
matrizes A e B em Rn×n e calcule C = A × B
*/
int main() {
    int n,i,j;
    printf("Digite o número de linhas/colunas (n): ");
    scanf("%d", &n);
    int matriz_a[n][n], matriz_b[n][n], matriz_c[n][n];
// Preencher a matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz_a[i][j]);
        }
    }
// Preencher a segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz_b[i][j]);
        }
    }
// inplementação
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matriz_c[i][j] = 0; // Inicializa o elemento da matriz C
            for (int k = 0; k < n; k++) {
                matriz_c[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
    printf("A matriz da multiplicação e:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz_c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

