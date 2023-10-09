#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que receba dois vetores A e B e o seus respectivos tamanhos por
parâmetro verifica se os valores de B estão contidos
*/
//função compara
 int compara(int A[], int tamA, int B[], int tamB){
    int i,j;
    for(i=0, j=0;i<tamA,j<tamB;i++,j++){
        if(A[i]==B[j]){
            return 1;
        }else
            return 0;
    }
 }

 int main(void){
    int i,tamA, tamB,aux;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamA);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamB);
    
    int A[tamA],B[tamB];
    for(i=0;i<tamA;i++){
        printf("Digite a posicao %d do primeiro vetor: ",i);
        scanf("%d", &A[i]);
    }	
    printf("\n");
 
    for(i=0;i<tamB;i++){
        printf("Digite a posicao %d do segundo vetor: ",i);
        scanf("%d", &B[i]);
    }	
    aux = compara(A,tamA, B, tamB);
    if(aux == 1){
        printf("O segundo vetor esta presente no primeiro!\n");
    }else{
        printf("O segundo vetor nao esta presente no primeiro!\n");
    }
    return EXIT_SUCCESS;
 }
