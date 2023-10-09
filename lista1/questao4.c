#include <stdio.h>
#include <stdlib.h>

//Qual o valor final na variável 'a'?

//função principal 
int main(void){
//declaração de variaveis
    int a,b;
    char h;
    a = 10;
    b = -15;
    h = 'A';
    a = b;
    b++;
    a = (b+a);
//mostrando o valor da variavel a
    printf("O valor de a e: %d\n",a);
 return 0;
}