#include <stdio.h>
#define TAM 10
/*Escreva um programa em C que leia 10 números inteiros em um vetor. Em seguida,
o seu programa deve encontrar a posição do maior elemento do vetor e imprimir esta
posição.
*/
int main(void){
	int vet[TAM];
	int i, max;
//Descrição do programa
	printf("O programa encontra a posição do maior elemento de um vetor!\n");
	for(i=0;i<TAM;i++){
		printf("Digite a posição %d do vetor: ",i);
		scanf("%d", &vet[i]);
	}
//Implementação
	max=vet[0];
	for(i=0;i<TAM;i++){
		if(vet[i]>max)
		max = vet[i];
	}
	printf("O maior valor presente no vetor e: %d \n", max);
	return 0;
}

