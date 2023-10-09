# include <stdio.h>
# include <stdlib.h>

/*Faça uma função que recebe como parâmetro dois vetores de inteiros representando
conjuntos de números inteiros, e devolve um outro vetor com o resultado da união
dos dois conjuntos. O vetor resultante deve ser alocado dinamicamente.
*/

int *uniao(int *v1, int n1, int *v2, int n2) {
    int n = n1 + n2;
    int *vet_aux = malloc(n * sizeof(int)); // Aloca dinamicamente o vetor resultado

    if (vet_aux == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }
int i;

    for (i = 0; i < n1; i++) {
        vet_aux[i] = v1[i];//Copia os elementos de v1 para o vetor resultado
    }

    for (i = 0; i < n2; i++) {
        vet_aux[n1 + i] = v2[i];//Copia os elementos de v2 para o vetor resultado após os elementos de v1
    }

    return vet_aux; // Retorna o vetor resultado
}

int main(void) {
    int n1, n2, *v1, *v2;

    printf("Digite n1: ");
    scanf("%d", &n1);

    if (n1 < 1 || n1 > 100) {
        printf("Entrada invalida\n");
        return 1;
    }

    v1 = malloc(n1 * sizeof(int));

    if (v1 == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    printf("Digite os elementos do vetor 1:\n");
    for (int i = 0; i < n1; i++) {
        printf("posição %d: ", i);
        scanf("%d", &v1[i]);
    }

    printf("Digite n2: ");
    scanf("%d", &n2);

    if (n2 < 1 || n2 > 100) {
        printf("Entrada invalida\n");
        return 1;
    }

    v2 = malloc(n2 * sizeof(int));

    if (v2 == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    printf("Digite os elementos do vetor 2:\n");
    for (int i = 0; i < n2; i++) {
        printf("posição %d: ", i);
        scanf("%d", &v2[i]);
    }

    int *resultado = uniao(v1, n1, v2, n2); // Chama a função uniao para realizar a união

    printf("Resultado da união dos conjuntos:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", resultado[i]);
    }

    // Libera a memória alocada
    free(v1);
    free(v2);
    free(resultado);

    return EXIT_SUCCESS;
}

