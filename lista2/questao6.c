#include <stdio.h>
//função principal
int main(void){
//declaração de variaveis
    int a,i, aux=0;
    printf("Digite um numero: ");
    scanf("%d", &a);
//definindo função
    for(i=1;i<=a;i++){
        aux = aux*i;   
    }
//mostrando o resultado
    printf("%d\n",aux);
    return 0;
}