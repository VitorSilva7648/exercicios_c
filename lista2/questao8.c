#include <stdio.h>

int main() {
    int n, num, soma = 0;

    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um valor positivo para n.\n");
        return 1;  // Retorna código de erro
    }
    for (int i = 1; i <= n; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);
        soma += num;
    }
    printf("A soma dos %d números é: %d\n", n, soma);

    return 0;  
}
