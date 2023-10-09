#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 80

/*Faça um programa em C que leia a string T e outra string p do teclado. Em
seguida o programa deverá imprimir todas as posições onde ocorrem p em T.
*/
int main(void){

    char T[TAM], p[TAM];
//obtendo dados do usuario
    printf("Digite uma palavra: ");
    fgets(T, sizeof(T), stdin);
//limpar memoria não utilizada
    T[strlen(T)-1] = '\0';
//segunda palavra
    printf("Digite uma palavra: ");
    fgets(p, sizeof(p), stdin);
//limpar memoria não utilizada
    p[strlen(p)-1] = '\0';
//implementação
//converter maiusculas para munisculas(biblioteca ctype)
int i;
    for (int i = 0; T[i] != '\0'; i++) {
        if (isalpha(T[i])) {
            T[i] = tolower(T[i]);
        }
    }
    for (int i = 0; p[i] != '\0'; i++) {
        if (isalpha(p[i])) {
            p[i] = tolower(p[i]);
        }
    }
//removendo espaços de T
    int j,aux1;
        for(i=0; i < strlen(T); i++) {
            for(j=0; j < strlen(T); j++) {
                    if(T[i] != ' ') {
                        T[j] = T[i];
                        j++;
                        aux1 = 0;
                    }else {
                        if(!aux1){
                            T[j] = T[i];
                            j++;            
                        }
                    }
                }
        }
// Terminar a string após a remoção dos espaços
    T[j] = '\0'; 
    char *aux = strstr(T, p);
    int posicao;
//imprimir o resultado
    while (aux != NULL) {
        posicao = (int)(aux - T);
        printf("%d ", posicao);
        aux = strstr(aux + 1, p);
    }
    if (posicao == 0) {
        printf("\np não foi encontrada em T.\n");
    } else {
        printf("\n%d", aux);
    }
    return 0;
}
