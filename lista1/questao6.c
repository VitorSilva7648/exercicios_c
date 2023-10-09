#include <stdio.h>
//função principal 
int main(void){
//declaração de variaveis
    int a,b,c,soma, mult;
//pedindo informação ao usuario 
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Digite mais um numero: ");
    scanf("%d", &c);
//definindo operações
    soma = (a+b+c);
    mult = (a*b*c);
//mostrando o resultado
    printf("A partir dos numeros digitados a soma é %d e a multiplicação e %d\n",soma, mult);
 return 0;
}