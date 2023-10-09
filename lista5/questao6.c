#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que receba um vetor de números reais (float) F e o seu tamanho
n por parâmetro e devolva a média aritmética dos números do vetor.
*/
//função que calcula media
float media(float F[], int n){
    int i,soma;
    soma=0.0;
    for(i=0;i<n;i++){
        soma += F[i];
    }
    return soma/n;
}

int main(void) {
    int i,n;
    float aux;
   
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
   
    float F[n];
    for(i=0;i<n;i++){
        printf("Digite a posicao %d do vetor: ",i);
        scanf("%f", &F[i]);
    }	
    printf("\n");
    aux = media(F,n);
    printf("%f", aux);

    return EXIT_SUCCESS;
}
