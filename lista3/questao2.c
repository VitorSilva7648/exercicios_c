#include <stdio.h>
#define TAM 10

/*Escreva um programa em C que leia 10 números de ponto flutuante em um vetor.
Em seguida, o seu programa deve calcular a média dos valores armazenados no vetor
e imprimir este valor.
*/
int main(void){
	float soma,media,aux,vet[TAM];
	int i;
//Descrição do programa
	printf("O programa calcula a média dos valores de um vetor!\n");
	for(i=0;i<TAM;i++){
		printf("Digite a posição %d do vetor: ",i);
		scanf("%f", &vet[i]);
	}
	printf("\n");
//Implementação
    for(i=0;i<TAM;i++){
        soma += vet[i];
    }
    media = soma/10;
	printf("A media dos valores presentes no vetor e: %.3f", media);
	return 0;
}