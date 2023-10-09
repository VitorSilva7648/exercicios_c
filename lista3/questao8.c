#include <stdio.h>

/*Escreva um programa em C que leia todos os elementos de uma matriz A4×4 e imprima
a matriz e a sua transposta na tela.
*/
int main(void){

//definindo variaveis
    int matriz[4][4];
    int i,j;
//lendo valores com laço
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        printf("Digite um valor para [%d][%d]: ", i,j);
        scanf("%d", &matriz[i][j]);
    }
    }
//imprimindo a matriz original
    printf("A matriz com os numeros digitados é:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", matriz[i][j]);
    }
     printf("\n");
    }
    int trans[4][4];
    printf("A matriz transposta com os numeros digitados é:\n");
//imprimindo os valores digitados pelo usuario com laço
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            trans[j][i] = matriz[i][j];
    }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        printf("%d ", trans[i][j]);
    }
    printf("\n");
    }
    return 0;
}
