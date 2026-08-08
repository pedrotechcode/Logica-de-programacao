#include <stdio.h>

int main(){
    double nota1, nota2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    nota_final = nota1 + nota2;
    printf("Nota final = %.1lf ", nota_final);

    if (nota_final >= 60) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    } 
    
    return 0;
}
