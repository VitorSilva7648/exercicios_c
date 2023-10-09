#include <stdio.h>
#include <stdlib.h>

//Qual o valor armazenado na variável 'a' no fim do programa?

//função principal
int main(){
//declaração de variaveis
    int a,b,c,d;
    d = 3;
    c = 2;
    b = 4;
    d = c + b;
    a = d + 1;
    a = a + 1;
//mostrando o valor da variavel a
    printf("O valor da variavel a e: %d\n", a);
    return 0; 
}
