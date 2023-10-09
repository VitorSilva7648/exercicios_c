#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	char a[80];
	char b[80];

//lendo dados	
	printf("Digite uma palavra: ");
//limpar o buffer
    setbuf(stdin, 0);
//ler  string
	fgets(a, 80,stdin);
//limpar memoria não utilizada
    a[strlen(a)-1] = '\0';
//lendo dados
	printf("Digite outra palavra: ");
//limpar o buffer
    setbuf(stdin, 0);
//ler  string
	fgets(b, 80,stdin);
//limpar memoria não utilizada
    b[strlen(b)-1] = '\0';
//comparar strings
	int comp;
	comp = strcmp(a,b);
//implementação
    if (comp == 0) {
        printf("0\n"); //Palavras são iguais
    } else if (comp < 0) {
        printf("-1\n"); //A primeira é lexicograficamente menor
    } else {
        printf("1\n"); //As palavras são diferentes
    }
	return 0;
}
