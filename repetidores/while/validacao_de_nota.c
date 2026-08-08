#include <stdio.h>

int main (){
    double nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    while ((nota1 < 0 || nota1 > 10) ||
       (nota2 < 0 || nota2 > 10))
    {
        printf("Nota invalida tente novamente: ");
        scanf("%lf", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%lf", &nota2);
    }

    media = (nota1 + nota2) / 2;
    printf("Media = %.1lf ", media);

    return 0;
}