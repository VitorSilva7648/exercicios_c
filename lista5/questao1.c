#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Escreva uma função que recebe dois pontos P1 = (x1, y1) e P2 = (x2, y2) e retorna a
distância euclidiana entre esses pontos
*/
//função que calcula distancia
float distancia(int x1,int y1,int x2,int y2){
    int resultado,a,b;
    a = (x2 - x1);
    b = (y2 - y1);
    return resultado = sqrt((a*a)+(b*b));
}

int main(void) {
    int P1[2],P2[2];
    int i,a,b;

    for(i=0;i<2;i++){
        printf("Digite o valor da posicao %d do primeiro vetor: ", i);
        scanf("%d", &P1[i]);
    }
    for(i=0;i<2;i++){
        printf("Digite o valor da posicao %d do primeiro vetor: ", i);
        scanf("%d", &P2[i]);
    }
    float aux = distancia(P1[0],P1[1],P2[0],P2[1]);
   
    printf("%.3f\n",aux);
    return EXIT_SUCCESS;
}