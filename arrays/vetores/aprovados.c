#include <stdio.h>
#include <string.h>

void limpar_entrada(void) {
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void ler_texto(char *buffer, int tamanho) {
    if (fgets(buffer, tamanho, stdin) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

int main(void) {
    int N;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &N);

    char nomes[N][50];
    double nota1[N];
    double nota2[N];
    double media_nota[N];

    for (int i = 0; i < N; i++) {
        printf("\nDigite nome, primeira e segunda nota do %do aluno:\n", i + 1);

        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);

        printf("Nota 1: ");
        scanf("%lf", &nota1[i]);

        printf("Nota 2: ");
        scanf("%lf", &nota2[i]);
    }

    for (int i = 0; i < N; i++) {
        media_nota[i] = (nota1[i] + nota2[i]) / 2.0;
    }

    printf("\nAlunos aprovados:\n");

    for (int i = 0; i < N; i++) {
        if (media_nota[i] >= 6.0) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}