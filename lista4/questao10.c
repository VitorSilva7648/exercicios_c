#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void){
	char a[80];
	printf("Digite uma palavra: ");
    fgets(a, sizeof(a), stdin);

//Remover os caracteres de nova linha 
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }
//auxiliares
int i, j;
// Verifique se a palavra é um palíndromo
    bool palindromo = true;
    for (i = 0, j = strlen(a) - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            palindromo = false;
            break;
        }
    }
    if (palindromo) {
        printf("A palavra digitada é um palíndromo.\n");
    } else {
        printf("A palavra digitada não é um palíndromo.\n");
    }
	return 0;
}