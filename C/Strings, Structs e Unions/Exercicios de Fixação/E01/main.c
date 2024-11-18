#include <stdio.h>

typedef struct {
    float numerador;
    float denominador; 
} Fracao;

float soma(Fracao* frac) {
    return frac->numerador + frac->denominador;  
}

float multiplicacao(Fracao* frac) {
    return frac->numerador * frac->denominador;  
}

int main()
{
    Fracao s, m;

    printf("Digite o valor 1 que deseja somar: ");
    scanf("%f", &s.numerador);

    printf("Digite o valor 2 que deseja somar: ");
    scanf("%f", &s.denominador);

    printf("Valor: %f\n", soma(&s));
}
