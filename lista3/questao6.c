#include <stdio.h>
#define TAM 100

int main() {
    int m, n,i,j;
    int matriz[TAM][TAM];

    printf("Digite o número de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o número de colunas (n): ");
    scanf("%d", &n);
// Preencher a matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
// Contagem dos elementos
    int frequency[101] = {0};  // Contagem dos elementos de -100 a 100
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            frequency[matriz[i][j] + 100]++;  // Deslocamento para lidar com números negativos
        }
    }
    int minFreq = m * n;  // Inicializar com o máximo possível
    int maxFreq = 0;
    int minElement, maxElement;
// Encontrar a menor e maior frequência e seus elementos correspondentes
    for (i = 0; i <= 200; i++) {  // Percorrer o intervalo -100 a 100
        if (frequency[i] > 0) {
            int element = i - 100;  // Recuperar o valor real do elemento
            if (frequency[i] < minFreq) {
                minFreq = frequency[i];
                minElement = element;
            }
            if (frequency[i] > maxFreq) {
                maxFreq = frequency[i];
                maxElement = element;
            }
        }
    }
// Imprimir resultados
    printf("Elemento com menor frequência: %d \n", minElement);
    printf("Elemento com maior frequência: %d \n", maxElement);

    return 0;
}

