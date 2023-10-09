#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função recursiva que computa o fatorial de um número n passado por
parâmetro
*/
//função que calcula fatorial
unsigned long long int fat(int n){
    if(n==0 || n==1){
        return 1;
    }else{
       return n*fat(n-1);
    }
}

int main(void) {
    int i,n;
   
    printf("Digite um numero: ");
    scanf("%d", &n);
   
    if(n<0){
        printf("n exite:");
    }else{
        unsigned long long resultado = fat(n);
        printf("O fatorial de %d e %llu\n", n, resultado);
        return 0;
    }	
    return EXIT_SUCCESS;
}