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

int main(){
    int N, i;
    
    printf("Serao digitados dados de quantos produtos?: ");
    scanf("%d", &N);

    char nome_mercadoria [N] [50];
    double preco_compra [N];
    double preco_venda [N];
    double lucro[N];
    double porcentagem_lucro [N];

    for (i = 0; i < N; i++) {
        printf("Produto %d\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome_mercadoria[i], 50);
        printf("Preco de compra: ");
        scanf("%lf", &preco_compra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &preco_venda[i]);

        
    }

    printf("RELATORIO:\n");

    // Calcular o lucro e porcentagem do lucro

    int lucro_abaixo_10 = 0;
    int lucro_entre = 0;
    int lucro_acima20 = 0;

    for (i = 0; i < N; i++) {
        lucro[i] = preco_venda[i] - preco_compra[i];
        porcentagem_lucro[i] = lucro[i] / preco_compra[i] * 100;   

        if (porcentagem_lucro[i] < 10)
        {
            lucro_abaixo_10++;
        }
        else if (porcentagem_lucro[i] >= 10 && porcentagem_lucro[i] <= 20){
                lucro_entre++;
        }
        else {
            lucro_acima20++;
        }
    }
    printf("Lucro abaixo de 10%%: %d\n", lucro_abaixo_10);
    printf("Lucro entre 10%% e 20%%: %d\n", lucro_entre);
    printf("Lucro acima de 20%%: %d\n", lucro_acima20);

    // Calular valor total de compra, venda, e lucro total;

    double valor_total_compra = 0;
    double valor_total_venda = 0;
    double lucro_total;
    
    for (i = 0; i < N; i++) {
        valor_total_compra += preco_compra[i];
        valor_total_venda += preco_venda[i];
    }
    lucro_total = valor_total_venda - valor_total_compra;
    
    printf("Valor total de compra: %.2lf\n", valor_total_compra);
    printf("Valor total de venda: %.2lf\n", valor_total_venda);
    printf("Lucro total: %.2lf\n", lucro_total);
    
    return 0;
}