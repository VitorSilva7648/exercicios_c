#include <stdio.h>
//função principal 
int main(void){
//declaração de variaveis
    int a,quad, cubo;
//pedindo informação ao usuario 
    printf("Digite um numero: ");
    scanf("%d", &a);
//definindo operações
    quad = (a*a);
    cubo = (a*a*a);
//mostrando o resultado
    printf("A partir do numero digitado, o seu quadrado é %d e o cubo e %d\n",quad, cubo);
 return 0;
}