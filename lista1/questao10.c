# include <stdio.h>
//função principal
    int main(){
//declaração de variaveis
    int a = 10, b = 2, aux;
    aux = a;
    a = b;
    b = aux;
//mostrando o resultado
    printf("O novo valor de a e %d e o novo valor de b e %d\n", a,b);
 return 0;
}