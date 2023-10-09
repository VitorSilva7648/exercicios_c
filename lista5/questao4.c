#include<stdio.h>
#include<stdlib.h>

/*Escreva um função que receba um vetor de inteiros A e o seu tamanho n por parâmetro
e retorna o vetor invertido.
*/

// Função para inverter o vetor A 
void inverte(int A[], int n) {
    int aux, *inicio, *fim; 
	inicio = A;
	fim = A + (n-1);
	while(inicio<fim){
		aux = *inicio;
		*inicio = *fim;
		*fim = aux;
		inicio++;
		fim--;
	}
}

int main(void) {
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

// Vetor de tamanho n
    int A[n];

    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição %d do vetor: ", i);
        scanf("%d", &A[i]);
    }

    printf("O vetor com os números digitados é: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
//função inverte    
	inverte(A,n);
    printf("O vetor invertido é: ");
    for (i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }
    return EXIT_SUCCESS;
}
