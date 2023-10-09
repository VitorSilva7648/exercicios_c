# include <stdio.h>

int main() {

    int V[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &V[1];
    int *q = &V[5];

    printf("%d\n", *(p + 3));
    printf("%d\n", *(q - 3));
    printf("%ld\n", q - p);

    (q < p) ? printf("SIM\n"): printf("NAO\n");

    if(*p < *q) printf("SIM\n");
    else printf("NAO\n");

    return 0;
}
