#include <stdio.h>

int main (){
    int N, i;
    int posicao_maior = 0;
    
    printf("Quanto numeros voce vai digitar?: ");
    scanf("%d", &N);

    double num[N];

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &num[i]);
    }

    double maior = num[0];
    for (i = 0; i < N; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
            posicao_maior = i;
        }
    }

    printf("\n");
    printf("Maior numero = %.1lf\n", maior);
    printf("Posicao do maior numero = %d", posicao_maior);

    return 0;
}