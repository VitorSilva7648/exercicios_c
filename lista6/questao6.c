#include <stdio.h>
#include <stdlib.h>

/*
(a) Declare um vetor do tipo t_aluno.
(b) Escreva uma função para ler o nome e a nota de cada aluno.
(c) Escreva uma função para encontrar a maior nota de aluno no vetor. Imprima o nome e a nota em seguida.
*/

typedef struct {
    char nome[80];
    float nota;
} t_aluno;

void ler_nome_nota(t_aluno *aluno) {
    printf("Digite um nome: ");
    scanf("%s", aluno->nome);
    printf("Digite uma nota: ");
    scanf("%f", &aluno->nota);
}

void imprimir_nome_nota(const t_aluno *aluno) {
    printf("Nome do aluno: %s\n", aluno->nome);
    printf("Nota do aluno: %.2f\n", aluno->nota);
}

int comparar_notas(const void *a, const void *b) {
    t_aluno *aluno1 = (t_aluno *)a;
    t_aluno *aluno2 = (t_aluno *)b;
    return (aluno2->nota - aluno1->nota); // Ordena em ordem decrescente de notas
}

int main(void) {
    int n;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    t_aluno alunos[n];

    for (int i = 0; i < n; i++) {
        printf("Aluno %d:\n", i + 1);
        ler_nome_nota(&alunos[i]);
    }
//Ordena os alunos pelo campo de notas em ordem decrescente
    qsort(alunos, n, sizeof(t_aluno), comparar_notas);

    printf("Aluno com a maior nota:\n");
    imprimir_nome_nota(&alunos[0]); // O aluno com a maior nota é o primeiro após a ordenação

    return EXIT_SUCCESS;
}

