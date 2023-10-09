#include <stdio.h>

/* Dadas duas sequências v1 e v2 de n e m valores inteiros, com n ≤ m, escreva um
programa em C que verifique quantas vezes a primeira sequência v1 ocorre na segunda
v2.
*/
int main(void){
	
    int n,m;
    int vet_a[] = {1, 3, 5, 5, 7, 9, 10};
    int vet_b[] = {2, 2, 4, 6, 8, 8, 10};
    
 
//Descrição do programa
	printf("O programa verifica quantas vezes a primeira sequência ocorre na segunda!\n");
//Implementação
 //   printf("Digite quantos valores tem a primeira sequencia: ");
 ///   scanf("%d", &n);

    int tam_vet_a = sizeof(vet_a) / sizeof(vet_a[0]);
    int tam_vet_b = sizeof(vet_b) / sizeof(vet_b[0]);
    int vet_s[tam_vet_a + tam_vet_b];

    int i,j,rep,controle_s;
    i = 0; 
    j = 0;
    controle_s = 0;

    while(i < tam_vet_a && j < tam_vet_b){
        if(vet_a[i] < vet_b[j]){
            vet_s[controle_s++] = vet_a[i++];
        } else {
            vet_s[controle_s++] = vet_b[j++];
        }
    }
    while(i < tam_vet_a){
        vet_s[controle_s++] = vet_a[i++];
    }

     while(j < tam_vet_b){
        vet_s[controle_s++] = vet_b[j++];
    }

    for(rep = 0; rep < tam_vet_a + tam_vet_b; rep++){
        printf("%d ", vet_s[rep]);
        
    }
    printf("\n");
    return 0;
}
   