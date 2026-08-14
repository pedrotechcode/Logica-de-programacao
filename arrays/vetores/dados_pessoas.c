#include <stdio.h>

int main(){
    int N, i;

    printf("Quantas pessoas serao digitadas?: ");
    scanf("%d", &N);

    double altura [N];
    char genero [N];

    for (i = 0; i < N; i++) {
        printf("Altura da %da pessoa: ",i+1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i+1);

         // // Espaço antes do %c faz o scanf ignorar caracteres de espaço,
        // como Enter (\n), espaços e tabulações que ficaram no buffer de entrada.
        scanf(" %c", &genero[i]);
    }

    double maior_altura = altura[0];
    double menor_altura = altura[0];

    for (i = 1; i < N; i++) {
        if (maior_altura < altura[i]){
            maior_altura = altura[i];
        }
        if (menor_altura > altura[i]){
            menor_altura = altura[i];
        }
    }

    printf("Menor altura = %.2lf\n", menor_altura);
    printf("Maior altura = %.2lf\n", maior_altura);

    double soma_alturas_mulheres = 0;
    double media_alturas_mulheres; 
    int numero_de_mulheres = 0;
    int numero_de_homens = 0;

    for (i = 0; i < N; i++) {
        if (genero[i] == 'F') {
            soma_alturas_mulheres += altura[i];
            numero_de_mulheres++;
        }   
        else if (genero[i] == 'M') {
            numero_de_homens++;
        }
    }

    if (numero_de_mulheres > 0) {
    media_alturas_mulheres = soma_alturas_mulheres / numero_de_mulheres;
    printf("Media da altura das mulheres = %.2lf\n", media_alturas_mulheres);
    }
    else {
        printf("Não ha mulheres cadastradas!\n");
    }

    printf("Numero de homens = %d", numero_de_homens);

    return 0;
}