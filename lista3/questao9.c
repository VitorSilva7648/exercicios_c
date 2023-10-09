#include <stdio.h>
#include <stdbool.h>
#define TAM_MAX 100

/*Dada uma matriz quadrada de números inteiros An×n, com 1 ≤ n ≤ 100, escreva um
programa em C que verifique se A é um quadrado mágico.
*/
bool quadradoMagico(int cubo[][TAM_MAX], int n) {
    int soma = 0;
    for (int j = 0; j < n; j++) {
        soma += cubo[0][j];
    }
    for (int i = 1; i < n; i++) {
        int soma_linhas = 0, soma_colunas = 0;
        for (int j = 0; j < n; j++) {
            soma_linhas += cubo[i][j];
            soma_colunas += cubo[j][i];
        }
        if (soma_linhas != soma || soma_colunas != soma) {
            return false;
        }
    }
    int soma_diagonal = 0;
    for (int i = 0; i < n; i++) {
        soma_diagonal += cubo[i][i];
    }
    if (soma_diagonal != soma) {
        return false;
    }
    int soma_diagonal_secundaria = 0;
    for (int i = 0; i < n; i++) {
        soma_diagonal_secundaria += cubo[i][n - 1 - i];
    }
    if (soma_diagonal_secundaria != soma) {
        return false;
    }
    return true; 
}

int main() {
    int n;
    int cubo[TAM_MAX][TAM_MAX];

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &n);

    printf("Digite os elementos do quadrado:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cubo[i][j]);
        }
    }

    if (quadradoMagico(cubo, n)) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}

