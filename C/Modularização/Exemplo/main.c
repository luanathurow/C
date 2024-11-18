#include <stdio.h>
#include "fun.h"

int main()
{
    int v;
    printf("Digite um valor: ");
    scanf("%d", &v);
    printf("Fatorial: %f\n", fatorial(v));
    printf("Somatório: %f\n", somatorio(v));

}
