#include <stdio.h>

int main (){
   int N, i;

    printf("Quantos elementos vai ter o vetor?: ");
    scanf("%d", &N);

    double num[i];

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &num[i]);
    }

    //Calcular à média
    double media, soma = 0;

    for (i = 0; i < N; i++)
    {
        soma += num[i];
    }

    media = soma / N;
    printf("Media vetores = %.3lf\n", media);

    //Calcular abaixo da média
    printf("Elementos abaixo da media:\n");
    for (i = 0; i < N; i++)
    {
        if (num[i] < media)
        {
            printf("%.1lf\n", num[i]);
        }
    }
    
    return 0;
}