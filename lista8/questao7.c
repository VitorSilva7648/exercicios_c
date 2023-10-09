#include<stdio.h>
#include<stdlib.h>

/*Faça uma função que leia todas as posições de uma matriz l × c. Em seguida, mostra
o índice da linha e o índice da coluna nas posições com números pares. No final,
exiba o número de posições pares e ímpares.
*/

int pares(int **matriz, int l, int c) {
    int i, j, aux = 0;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("Posição %d%d da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            if (matriz[i][j] % 2 == 0) {
                aux++;
            }
        }
    }
    return aux; // Retorna a quantidade de números pares
}

int main(void) {
    int l, c;
    printf("Digite o numero de linhas: ");
    scanf("%d", &l);

    if (l < 0) {
        printf("Numero de linhas invalido!");
        return 1;
    }

    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    if (c < 0) {
        printf("Numero de colunas invalido!");
        return 1;
    }

    int **matriz = (int **)malloc(l * sizeof(int *));

    if (matriz == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < l; i++) {
        matriz[i] = (int *)malloc(c * sizeof(int));

        if (matriz[i] == NULL) {
            printf("Erro na alocação de memória\n");
            return 1;
        }
    }

    int quantidade_pares = pares(matriz, l, c);
    int quantidade_impares = l * c - quantidade_pares;

    printf("Quantidade de pares: %d\n", quantidade_pares);
    printf("Quantidade de ímpares: %d\n", quantidade_impares);

    // Libera a memória alocada para a matriz
    for (int i = 0; i < l; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return EXIT_SUCCESS;
}
