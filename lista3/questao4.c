#include <stdio.h>

/* Dadas duas sequências v1 e v2 de n e m valores inteiros, com n ≤ m, escreva um
programa em C que verifique quantas vezes a primeira sequência v1 ocorre na segunda
v2.
*/
int main(void){
    int i,j,n,m;
    int vet_a[] = {1, 0, 1};
    int vet_b[] = {1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0};
//Descrição do programa
	printf("O programa verifica quantas vezes a primeira sequência ocorre na segunda!\n");
//Implementação
 //   printf("Digite quantos valores tem a primeira sequencia: ");
 ///   scanf("%d", &n);
    int tam_vet_a = sizeof(vet_a) / sizeof(vet_a[0]);
    int tam_vet_b = sizeof(vet_b) / sizeof(vet_b[0]);
    int contador = 0;
    for (int i = 0; i <= tam_vet_b - tam_vet_a; i++) {
        int j;
        for (j = 0; j < tam_vet_a; j++) {
            if (vet_b[i + j] != vet_a[j]) {
                break;
            }
        }
        if (j == tam_vet_a) {
            contador++;
        }
    }
    printf("Resultado: %d\n", contador);
    return 0;
}
   