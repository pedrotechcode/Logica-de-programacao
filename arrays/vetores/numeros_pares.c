#include <stdio.h>

int main (){
    int N, i, count = 0;

    printf("Quantos numeros voce vai digitar?: ");
    scanf("%d", &N);

    int num[N];

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);

    }

    printf("Numeros pares:\n");
    for (i = 0; i < N; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d ", num[i]);
            count++;
        }
    }

    printf("\nNumeros pares digitados = %d", count);

    return 0;
}