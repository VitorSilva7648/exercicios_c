#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função recursiva que computa o fatorial de um número n passado por
parâmetro
*/
//função que calcula potencia
double pot(double a, int b){
    if(b == 0){
        return 1.0;
    }else if (b > 0){ 
        return a * pot(a, b - 1);
    }
    else{
        return 1.0 / (a * pot(a, - b - 1));
    }
}

int main(void) {
    double a;
    int b;
   
    printf("Digite um numero: ");
    scanf("%lf", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);
   
    double resultado = pot(a, b);
    
    printf("%.2lf ^ %d = %.2lf\n", a, b, resultado);
    
    return EXIT_SUCCESS;
}