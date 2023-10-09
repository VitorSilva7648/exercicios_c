#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	char a[80], b[80], c[80];
	
	printf("Digite uma palavra: ");
//limpar o buffer
    setbuf(stdin, 0);
//ler  string
	fgets(a, 80,stdin);
//limpar memoria não utilizada
    a[strlen(a)-1] = '\0';
	printf("Digite outra palavra: ");
//limpar o buffer
    setbuf(stdin, 0);
//ler  string
	fgets(b, 80,stdin);
//limpar memoria não utilizada
    b[strlen(b)-1] = '\0';

	printf("Digite outra palavra: ");
//limpar o buffer
    setbuf(stdin, 0);
//ler  string
	fgets(c, 80,stdin);
//limpar memoria não utilizada
    c[strlen(c)-1] = '\0';

//concatenação de strings
	strcat(a,b);
char aux2[80];
//copiando a concatenação de a,b em um auxiliar
    strcpy(aux2,a);
//concatenação do aux com a palavra c
    strcat(aux2,c);

//ordenar a string em ordem alfabética
	int temp = 0, i, j;
	for(i = 0; i <strlen(aux2) - 1; i++){
		for(j = i + 1; j < strlen(aux2); j++){
			if (aux2[i] > aux2[j]) {
				temp = aux2[i];
				aux2[i] = aux2[j];
				aux2[j] = temp;
			}
		}
	}
//mostrando o texto
	printf("%s \n",aux2);
	return 0;
}
