#include<stdio.h>
#include<stdlib.h>

//Escreva uma função que testa se um número i é primo
//função verifica se é primo
int ehprimo(int a){
      int i,aux=0;
//laço que percorre os numeros ate o digitado
      for(i=1;i<=a;++i){
//verifica o resto da divisão
           if(a%i==0){
            aux++;
      }
//verifica quantos divisores possui
   }if(aux == 2){
      return 1;
   }else
      return 0;
}

int main(void){
   int n,i;
   printf("Digite um numero n que deseja verificar todos os números primos de 1 até n: ");
   scanf("%d", &n);
	for(i=2;i<=n;++i){
            if(ehprimo(i) == 1){
	            printf("%d ", i);
      }
      }
      printf("\n");
  return EXIT_SUCCESS;
}
