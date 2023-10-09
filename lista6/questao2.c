#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba duas structs do tipo dd/mm/aaaa, cada uma
representando uma data válida, e devolva o número de dias que decorreram entre as
duas datas.
*/

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

int diasNoMes(int mes, int ano) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))) {
        return 29; //Fevereiro em ano bissexto
    } else {
        return diasPorMes[mes];
    }
}

int main() {
    Data data1, data2;
    int i;

//Leitura da primeira data
    printf("Digite o ano da primeira data: ");
    scanf("%d", &data1.ano);
    printf("Digite o mes da primeira data: ");
    scanf("%d", &data1.mes);
    printf("Digite o dia da primeira data: ");
    scanf("%d", &data1.dia);
//Verificação da validade da primeira data
    if (data1.mes < 1 || data1.mes > 12 || data1.dia < 1 || data1.dia > diasNoMes(data1.mes, data1.ano)) {
        printf("A primeira data inserida nao e valida!\n");
        return EXIT_FAILURE;
    }
//Leitura da segunda data
    printf("Digite o ano da segunda data: ");
    scanf("%d", &data2.ano);
    printf("Digite o mes da segunda data: ");
    scanf("%d", &data2.mes);
    printf("Digite o dia da segunda data: ");
    scanf("%d", &data2.dia);

// Verificação da validade da segunda data
    if (data2.mes < 1 || data2.mes > 12 || data2.dia < 1 || data2.dia > diasNoMes(data2.mes, data2.ano)) {
        printf("A segunda data inserida nao e valida!\n");
        return EXIT_FAILURE;
    }
//Cálculo do número de dias entre as datas
    int dias = 0;

    if (data1.ano == data2.ano) {
        if (data1.mes == data2.mes) {
            dias = abs(data1.dia - data2.dia);
        } else {
            for (i = data1.mes; i < data2.mes; i++) {
                dias += diasNoMes(i, data1.ano);
            }
            dias -= data1.dia;
            dias += data2.dia;
        }
    } else {
        for (i = data1.ano; i < data2.ano; i++) {
            if (i == data1.ano) {
                for (int j = data1.mes; j <= 12; j++) {
                    dias += diasNoMes(j, i);
                }
                dias -= data1.dia;
            } else if (i == data2.ano) {
                for (int j = 1; j < data2.mes; j++) {
                    dias += diasNoMes(j, i);
                }
                dias += data2.dia;
            } else {
                for (int j = 1; j <= 12; j++) {
                    dias += diasNoMes(j, i);
                }
            }
        }
    }
    printf("O numero de dias entre as duas datas e: %d\n", dias);
    return EXIT_SUCCESS;
}