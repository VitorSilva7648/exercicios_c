#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	char a[80];
	printf("Digite uma palavra: ");
    fgets(a, sizeof(a), stdin);
//auxiliares
int i,j, aux;
    
    for(i=0; i < strlen(a); i++) {
        for(j=0; j < strlen(a); j++) {
            if(a[i] != ' ') {
                a[j] = a[i];
                j++;
                aux = 0;
        }else {
        if(!aux){
              a[j] = a[i];
              j++;
              aux = 1;
        }
        }
        }
    }
    a[j] = '\0'; // Adiciona o terminador de string
    printf("A palavra sem espaços extras: %s", a);

	return 0;
}
