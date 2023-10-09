#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa na linguagem C que subtraia 14 de 73 e mostre o resultado na
saída padrão com uma mensagem apropriada
*/

//função principal
int main(){
//declaração de variaveis
    int a,b,sub;
    a = 73;
    b = 14;
//operação a ser realizada
    sub = a - b;
//mostrando o valor da operação
    printf("O valor de %d - %d e: %d\n",a,b,sub);
    return 0; 
}