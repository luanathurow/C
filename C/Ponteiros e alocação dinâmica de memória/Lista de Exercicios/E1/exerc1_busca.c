#include <stdio.h>

int busca(int v[], int tam, int valor);

int busca(int v[], int tam, int valor)
{
    int *ptr = v;
    for (int i = 0; i < tam; i++)
    {
        if (*ptr == valor) // ou: *(ptr+i)
            return i;
        ptr++; // se for *(ptr+1), retire esta linha!
    }
    return -1;
}

int main()
{
    int vet[] = {3, 1, 8, 4, 9, 0};
    int v;
    printf("Digite o valor a procurar: ");
    scanf("%d", &v);
    int pos = busca(vet, 6, v);
    if (pos == -1)
        printf("Não encontrado!\n");
    else
        printf("Achei na posição %d\n", pos);
}