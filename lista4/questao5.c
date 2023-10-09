#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 80

/*Escreva um programa em C que leia duas strings do teclado e determina se a
segunda é um anagrama da primeira.
*/
int main(void){

    char a[TAM], b[TAM];
//obtendo dados do usuario
    printf("Digite uma palavra: ");
    fgets(a, sizeof(a), stdin);
//limpar memoria não utilizada
    a[strlen(a)-1] = '\0';
//segunda palavra
    printf("Digite uma palavra: ");
    fgets(b, sizeof(b), stdin);
//limpar memoria não utilizada
    b[strlen(b)-1] = '\0';
    
//implementação
//converter maiusculas para munisculas(biblioteca ctype)
int i;

    for(i=0;i<a[i]!='\0';i++){
        if(a[i] != ' '){
            a[i]=tolower(a[i]);
        }
    }
    for(i=0;i<b[i]!='\0';i++){
        if(b[i] != ' '){
            b[i]=tolower(b[i]);
        }
    }
//Verificar se as palavras têm o mesmo comprimento após a remoção de espaços
    int tam_a = 0, tam_b = 0;
    for (i = 0; a[i] != '\0'; i++) {
        if (!isspace(a[i])) {
            tam_a++;
        }
    }

    for (i = 0; b[i] != '\0'; i++) {
        if (!isspace(b[i])) {
            tam_b++;
        }
    }
    if (tam_a != tam_b) {
        printf("As palavras não são anagramas.\n");
    }
int aux[26]={0}, aux2[26]={0};
//vetores de contagem de caracteres
    for(i=0;i<a[i]!='\0';i++){
        if (isalpha(a[i])) {
            aux[a[i] - 'a']++;
        }
        if (isalpha(b[i])) {
            aux2[b[i] - 'a']++;
        }
    }    
    
// Verifique se os vetores de contagem são iguais
    int anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (aux[i] != aux2[i]) {
            anagram = 0;
            break;
        }
    }
    if (anagram) {
        printf("As palavras são anagramas.\n");
    } else {
        printf("As palavras não são anagramas.\n");
    }
    return 0;
}