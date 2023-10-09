#include <stdio.h>
#include <stdbool.h>
#define MAX_LINHAS 100
#define MAX_COLUNAS 100

bool TemDuplicados(float matriz[][MAX_COLUNAS], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int x = i; x < m; x++) {
                for (int y = (x == i) ? j + 1 : 0; y < n; y++) {
                    if (matriz[i][j] == matriz[x][y]) {
                        printf("A matriz têm elementos repetidos");
                        return true; 
                    } else {
                        printf("A matriz não contém elementos repetidos.\n");
                    }
                }
            }
        }
    }
    return false; 
}
int main() {
    int m, n;
    float matriz[MAX_LINHAS][MAX_COLUNAS];
    printf("Digite o número de linhas: ");
    scanf("%d", &m);
    printf("Digite o número de colunas: ");
    scanf("%d", &n);
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    TemDuplicados(matriz, m, n);
    return 0;
}
