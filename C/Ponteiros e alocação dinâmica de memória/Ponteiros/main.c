#include <stdio.h>

int main()
{
    int b = 200;
    int* a = &b; // a armazenará o endereço de b

    printf("Valor de b: %d\n", b);
    printf("Valor de a: %p\n", a);
    printf("Conteúdo apontado por a: %d", *a);
}