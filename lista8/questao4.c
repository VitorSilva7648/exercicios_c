# include <stdio.h>
# include <stdlib.h>

/*Faça um programa que leia a dimensão n de um vetor, em seguida aloca dinamicamente
dois vetores do tipo double de dimensão n, faz a leitura de cada vetor e 
finalmente e imprime o resultado da soma dos dois vetores.
*/

int main(void){
    int i,n;
    double *v1,*v2,aux=0.0;
    printf("Digite n:");
    scanf("%d", &n);
    if ((n<1) || (n>100)){
        printf("Entrada invalida");
        return 1;
    }
//alocação dinamica
    v1 = malloc(n * sizeof(double));
    v2 = malloc(n * sizeof(double));
//gerando vetor 1
    for(i=0;i<n;i++){
        printf("posição %d: ", i);
        scanf("%lf: ", &v1[i]);
    }
//gerando vetor 2
    for(i=0;i<n;i++){
        printf("posição %d: ", i);
        scanf("%lf: ", &v2[i]);
    }
//soma
    for(i=0;i<n;i++){
        if(i<n){
        aux += (v1[i] + v2[i]); 
        }
    }
    printf("%.3f ", aux);
// Libere a memória alocada quando não for mais necessária
    free(v1);
    free(v2);
   
return EXIT_SUCCESS;
}