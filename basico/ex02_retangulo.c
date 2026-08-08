#include <stdio.h>
#include <math.h>

int main(){
double base_retangulo, altura_retangulo, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base_retangulo);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura_retangulo);

    area = base_retangulo * altura_retangulo;
    perimetro = base_retangulo * 2 + altura_retangulo * 2;
    diagonal = sqrt(pow(base_retangulo, 2) + pow(altura_retangulo, 2));

    printf("Area do retangulo = %.4lf\n", area);
    printf("Perimetro do retangulo = %.4lf\n", perimetro);
    printf("Diagonal do retangulo = %.4lf\n", diagonal);

    return 0;
}
