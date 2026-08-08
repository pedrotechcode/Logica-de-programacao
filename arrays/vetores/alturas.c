#include <stdio.h>
#include <string.h>

//Comando para limpeza de buffer de entrada (Comando do Nélio Alves)
void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

//Para ler um texto de tamanho N até a quebra de linha (Comando do Nélio Alves)
void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main (){
    int N, i, menores = 0;
    double altura_soma = 0, altura_media;
    double porcentagem_idade;
    

    printf("Quantas pessoas serao digitadas?: ");
    scanf("%d", &N);

    //variaveis do vetores
    char nome [N] [50];
    int idade [N];
    double altura[N];

    for (i = 0; i < N; i++)
    {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);

    }
    
    //Calcular altura media
    for (i = 0; i < N; i++)
    {
        altura_soma += altura[i];
    }
        altura_media = altura_soma / N;

    printf("\n");
    printf("Altura media = %.2lf\n", altura_media);

    //Calcular pessoas menores de 16 anos
    for (i = 0; i < N; i++)
    {
        if (idade[i] < 16)
        {
            menores++;
        }
    }

    porcentagem_idade =  (double)menores * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.2lf%%\n", porcentagem_idade);

    for (i = 0; i < N; i++)
    {
        if (idade[i] < 16)
        {
            printf("%s\n", nome[i]);
        }
    }
    
    return 0;
}