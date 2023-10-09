#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Defina um registro empregado para armazenar os dados (nome, sobrenome, data de
nascimento, CPF, data de admissão, salário) de um colaborador de sua empresa. Em
seguida:
(a) Defina um vetor de empregados para armazenar todos os colaboradores de sua
empresa
(b) Escreva uma função de busca por CPF nesse vetor.
*/
typedef struct registro_empregado {
    char nome[50], sobrenome[50];
    char data_nascimento[15],data_admissao[15];
    char cpf[12];
    float salario;
    int tamanho;
}registro_empregado;

void inserir_registro(registro_empregado *empregado) {
    empregado ->tamanho++;
    printf("Digite o nome: ");
    scanf("%s", empregado->nome);
    printf("Digite o sobrenome: ");
    scanf("%s", empregado->sobrenome);
    printf("Digite a data de nascimento: ");
    scanf("%s", empregado->data_nascimento);
    printf("Digite o CPF: ");
    scanf("%s", empregado->cpf);
    printf("Digite a data de admissao: ");
    scanf("%s", empregado->data_admissao);
    printf("Digite o salario: ");
    scanf("%f", &empregado->salario);
}

void busca_cpf(char cpf[], registro_empregado *empregados, int tamanho) {
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(cpf, empregados[i].cpf) == 0) {
            printf("CPF encontrado!\n");
            printf("Nome: %s %s\n", empregados[i].nome, empregados[i].sobrenome);
            printf("Data de Nascimento: %s\n", empregados[i].data_nascimento);
            printf("Data de Admissao: %s\n", empregados[i].data_admissao);
            printf("Salario: %.2f\n", empregados[i].salario);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("CPF nao encontrado!\n");
    }
}

int main(void) {
    int tamanho_maximo = 100;
    registro_empregado empregados[tamanho_maximo];
    int tamanho = 0;

    while (1) {
        printf("Escolha uma opcao:\n");
        printf("1. Inserir registro\n");
        printf("2. Buscar por CPF\n");
        printf("3. Sair\n");
        int opcao;
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (tamanho < tamanho_maximo) {
                inserir_registro(&empregados[tamanho]);
                tamanho++;
            } else {
                printf("Limite de registros atingido.\n");
            }
        } else if (opcao == 2) {
            char cpf[12];
            printf("Digite o CPF que deseja buscar: ");
            scanf("%s", cpf);
            busca_cpf(cpf, empregados, tamanho);
        } else if (opcao == 3) {
            break;
        } else {
            printf("Opcao invalida.\n");
        }
    }

    return EXIT_SUCCESS;
}