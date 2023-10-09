#include <stdio.h>
//função principal
    int main(){
//declaração de variaveis
    int a,i,aux=1;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
//definindo função
    for(i=a;i>=1;i--){
        aux = aux*i;
    }
//mostrando o resultado
    printf("%d\n",aux);
 return 0;
}