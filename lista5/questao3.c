#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que recebe dois números inteiros positivos a e b por parâmetro
e determina se eles são amigos ou não, devolvendo 1 caso sejam amigos, e 0 caso
contrário
*/
//função verifica se é amigo
int amigos(int a, int b){
      int i,j,soma_a=0,soma_b=0;;
//laço que percorre os numeros ate o digitado
    for(i=1;i<a;i++){
        if(a%i == 0){
        soma_a +=i;
      }
    }
    for(i=1;i<b;i++){
        if(b%i == 0){
        soma_b +=i;
      }
    }
//verifica quantos divisores possui
    if(soma_a == b && soma_b == a){
      return 1;
    }else
       return 0;
}

//dados usuario
int main(void){
   int a,b;
   printf("Digite um numero: ");
   scanf("%d", &a);

    printf("Digite um numero: ");
   scanf("%d", &b);
 
    if(amigos(a,b)==1){
    printf("1\n");
        }else{
            printf("0\n");
        }
  return EXIT_SUCCESS;
}
