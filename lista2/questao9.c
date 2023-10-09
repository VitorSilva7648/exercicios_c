#include <stdio.h>
#include <math.h>

int main(void){
	int n, i;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	for(i=0;i<=n;i++){
		printf("%.2lf \n", pow(2,i));
	}
	return 0;
}
	
