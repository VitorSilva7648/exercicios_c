#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
	char a[80];
	printf("Digite uma palavra: ");
    fgets(a, sizeof(a), stdin);
//auxiliares
int i,j;

//Removendo os caracteres de nova linha 
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }
       for (i = 0, j = strlen(a) - 1; i < j; i++, j--) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("O inverso da palavra digitada e: %s\n", a);

return 0;
}