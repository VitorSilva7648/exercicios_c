#include <stdio.h>
#include <stdlib.h>

typedef struct hm {
    int horas;
    int minutos;
} t_hm;

void converter_minutos_hora(int minutos, t_hm *hm) {
    if (minutos < 0) {
        printf("Entrada inválida\n");
        return;
    }

    hm->horas = minutos / 60;
    hm->minutos = minutos % 60;
}

void imprimir(const t_hm *hm) {
    if (hm->horas > 0) {
        printf("%d hora(s) e %d minuto(s)\n", hm->horas, hm->minutos);
    } else {
        printf("%d minuto(s)\n", hm->minutos);
    }
}

int main(void) {
    int n;

    printf("Digite a quantidade de minutos que deseja converter em horas: ");
    scanf("%d", &n);

    t_hm hm;
    converter_minutos_hora(n, &hm);
    imprimir(&hm);

    return EXIT_SUCCESS;
}