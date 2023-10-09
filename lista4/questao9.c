#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
	char a[80], aInvertido[80];
	printf("Digite uma palavra: ");
    fgets(a, sizeof(a), stdin);
//auxiliares
int i,j, aux;
    aux=0;
    while(a[aux]!= '\0' && a[aux]!= '\n'){
        aux++;
    }
    i=aux-1;
    j=0;
    while(j<aux){
        aInvertido[j] = a[i];
        i--;
        j++;
    }
    aInvertido[aux]='\0';
    printf("O inverso da palavra digitada e: \n%s\n", aInvertido);

return 0;
}