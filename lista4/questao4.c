#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){
	char a[80];
//lendo uma palavra
	printf("Digite uma palavra: ");
//amarzenando conteudo
    fgets(a, sizeof(a), stdin);
//remoção de espaços
int i,j, aux;
    for(i=0; i < strlen(a); i++) {
        for(j=0; j < strlen(a); i++) {
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
    for (int i = 0; i < strlen(a); i++) {
        a[i] = tolower(a[i]);
    }
    printf("A palavra sem letras maisculas: %s", a);
	return 0;
}