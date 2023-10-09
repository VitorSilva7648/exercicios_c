#include <stdio.h>
#include <stdlib.h>

/*Dada uma sequência com n números de qualquer dos tipos int ou float, com 1 ≤
n ≤ 100, escreva um programa que calcule a soma de todos os números int e o
produto de todos os números float.
*/

union int_or_float {
    int i;
    float f;
};

int main(void){

    union int_or_float Union;
    int i,n,soma=0;
    float j,x,mult=1.0;

//pedindo valores
    printf("n: ");
    scanf("%d", &n);
//calculando a soma
    for(i=1;i<=n;++i){
        Union.i = i;
        soma += Union.i;
    }
//pedindo valores
    printf("x: ");
    scanf("%f", &x);
//calculando a multiplicação
    for(j=1;j<=x;j++){
        Union.f = j;
        mult *= Union.f;
    }
//mostrando valores
    printf("%d\n", soma);
    printf("%.2f\n", mult);
    return EXIT_SUCCESS;
}
