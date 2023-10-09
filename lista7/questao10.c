# include <stdio.h>

struct pts_int {
    int *pt1;
    int *pt2;
};

int main(){

    int i1, i2=100;
    struct pts_int reg;

    reg.pt1 = &i1;
    reg.pt2 = &i2;
    *reg.pt1 = -2;

    printf("i1 = %d, *reg.pt1 = %d\n", i1, *reg.pt1);
    printf("i2 = %d, *reg.pt2 = %d\n", i2, *reg.pt2);

    return 0;
}