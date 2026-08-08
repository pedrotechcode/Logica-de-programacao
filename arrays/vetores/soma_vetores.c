#include <stdio.h>

int main () {
    int N, i;

    printf("Quantos valores vai ter cada vetor?: ");
    scanf("%d", &N);
    
    int a[N];

    printf("Digite os valores do vetor A:\n");
    for (i = 0; i < N; i++)
    {
        printf("");
        scanf("%d", &a[i]);    
    }
    
    int b[N];

    printf("Digite os valores do vetor B:\n");
    for (i = 0; i < N; i++)
    {
        printf("");
        scanf("%d", &b[i]);
    }

    int c[N];

    for (i = 0; i < N; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Resultado da soma dos vetores:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d\n", c[i]);
    }

    return 0;
}