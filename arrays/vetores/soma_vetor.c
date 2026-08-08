#include <stdio.h>

int main (){
    int N, i;
    double soma = 0, media;

    printf("Quantos numeros voce vai digitar?: ");
    scanf("%d", &N);

    double num[N];

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &num[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("Valores = %.1lf\n", num[i]);
        soma += num[i];
    }

    media = soma / N;
    printf("Soma = %.1lf\n", soma);
    printf("Media = %.1lf", media);
    
    return 0;
}