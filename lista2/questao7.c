# include <stdio.h>

    int main(){
    int i, n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    i=1;
    do{
        printf("%d\n",i);
        i = i+1;
    } while(i <= n);
    return 0;
}