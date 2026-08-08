#include <stdio.h>

int main(){
    double largura, comprimento, valor_metro_quadrado, area, preco_terreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor_metro_quadrado);

    area = largura * comprimento;
    preco_terreno = area * valor_metro_quadrado;

    printf("Area do terreno = %.2lf \n", area);
    printf("Preco do terreno = %.2lf \n", preco_terreno);

    return 0;
}
