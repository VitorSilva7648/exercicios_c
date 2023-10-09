#include<stdio.h>
#include<stdlib.h>

//verificar o que faz a função imprime_alguma_coisa
//função para imprimir
void imprime_alguma_coisa(int n){
    if (n != 0) {
        imprime_alguma_coisa(n / 2);
        printf("%c", '0' + n % 2);
    }
}

int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
   
	imprime_alguma_coisa(n);
    printf("%d\n", n);

    return EXIT_SUCCESS;
}
