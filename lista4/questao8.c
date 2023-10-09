#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 80

/*Faça um programa em C que leia a string T1 e outra string T2 do teclado. Em seguida verifique 
se T1 é subsequência de T2, ou seja, se T1 pode ser obtida por meio da remoção de letras de T2. 
A ordem das letras não pode ser alterada.
*/

//função para remover espaço
void remov(char str[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = tolower(str[i]);
        }
    }
    str[j] = '\0';
}
int main(void){

    char T[TAM], T2[TAM];
//obtendo dados do usuario
    printf("Digite uma palavra: ");
    fgets(T, sizeof(T), stdin);
//limpar memoria não utilizada
    T[strlen(T)-1] = '\0';
//segunda palavra
    printf("Digite uma palavra: ");
    fgets(T2, sizeof(T2), stdin);
//limpar memoria não utilizada
    T2[strlen(T2)-1] = '\0';
//implementação
//converter maiusculas para munisculas(biblioteca ctype)
int i,j;
    for (int i = 0; T[i] != '\0'; i++) {
        if (isalpha(T[i])) {
            T[i] = tolower(T[i]);
        }
    }
    for (int i = 0; T2[i] != '\0'; i++) {
        if (isalpha(T2[i])) {
            T2[i] = tolower(T2[i]);
        }
    }
//removendo espaços de T e T2
    remov(T);
    remov(T2);    
//implementação T1 subsequencia de T2
    while (T[i] != '\0' && T2[j] != '\0') {
        if (T[i] == T2[j]) {
            i++;
        }
        j++;
    }
    if (T[i] == '\0') {
        printf("A primeira palavra é subsequência da segunda.\n");
    } else {
        printf("A primeira palavra não é subsequência da segunda.\n");
    }
    return 0;
}
