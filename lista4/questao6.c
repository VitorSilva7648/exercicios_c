#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 80

/*Faça um programa em C que leia duas strings do teclado e elimine, da segunda
string, todas as ocorrências dos caracteres da primeira string.
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
//string resultante
    char resultado[TAM];
    int indice_Resultado = 0;
//Verificar cada caractere em b e adicionar ao resultado se não estiver em a
    for (int i = 0; b[i] != '\0'; i++) {
        if (strchr(a, b[i]) == NULL) {
            resultado[indice_Resultado] = b[i];
            indice_Resultado++;
        }
    }
//Adicionar o caractere nulo de terminação ao resultado
    resultado[indice_Resultado] = '\0';
// Imprimir o resultado
    printf("Resultado após eliminação: %s\n", resultado);
    return 0;
}