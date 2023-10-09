# include <stdio.h>
# include <stdlib.h>

/*Dados dois vetores x e y, ambos com n elementos, 1 ≤ n ≤ 100, determinar o produto
escalar desses vetores. Use alocação dinâmica de memória.
*/

int main(void){
    int i,n, *v1,*v2, aux=0;
    printf("Digite n:");
    scanf("%d", &n);
    if ((n<1) || (n>100)){
        printf("Entrada invalida");
        return 1;
    }
//alocação dinamica
    v1 = malloc(n * sizeof(int));
    v2 = malloc(n * sizeof(int));
//gerando vetor 1
    for(i=0;i<n;i++){
        printf("posição %d: ", i);
        scanf("%d: ", &v1[i]);
    }
//gerando vetor 2
    for(i=0;i<n;i++){
        printf("posição %d: ", i);
        scanf("%d: ", &v2[i]);
    }
//produto escalar
    for(i=0;i<n;i++){
        if(i<n){
        aux += (v1[i] * v2[i]); 
        }
    }
    printf("%d ", aux);
// Libere a memória alocada quando não for mais necessária
    free(v1);
    free(v2);
   
return EXIT_SUCCESS;
}