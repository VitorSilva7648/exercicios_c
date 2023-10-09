#include <stdio.h>
#define TAM 10

/* Escreva um programa em C que leia 10 números inteiros em um vetor. Em seguida, o
seu programa deve ler um outro número inteiro x. O programa deve então encontrar
dois números de posições distintas do vetor cuja multiplicação seja x e imprimi-los.
Caso não existam tais números, o programa deve informar isto.
*/
int main(void){
	int vet[TAM];
    int  i,j,x;
//Descrição do programa
	printf("O programa encontra a posição do maior elemento do vetor e imprime esta posição!\n");
	for(i=0;i<TAM;i++){
	 	printf("Digite a posição %d do vetor: ",i);
	 	scanf("%d", &vet[i]);
	}
     printf("Digite um valor de 'x' para verificar se a multiplicação entre dois elementos do vetor resulta em x: ");
	 scanf("%d", &x);
//Implementação 
    int vet_copy_a[TAM];
    int valor_primeiro_vet, valor_segundo_vet;
   
    for(i = 0; i < TAM ; i++){
        vet_copy_a[i] = vet[i];
    }
    for(i=0 ; i<TAM; i++){
        valor_primeiro_vet = vet[i];
        for(j=0 ; j<TAM; j++){
            valor_segundo_vet = vet_copy_a[j];
            if(valor_primeiro_vet * valor_segundo_vet == x){
                return printf("Resultado = %d, %d\n", valor_primeiro_vet, valor_segundo_vet);
            }
        }
    }
	return 0;
}