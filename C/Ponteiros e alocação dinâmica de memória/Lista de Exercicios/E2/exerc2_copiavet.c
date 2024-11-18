#include <stdio.h>

void copia(int v1[], int v2[], int tam);

void copia(int v1[], int v2[], int tam)
{
    int *ptr1 = v1;
    int *ptr2 = v2;
    for (int i = 0; i < tam; i++)
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
}

int main()
{
    int vet1[] = {3, 1, 8, 4, 9, 0};
    int vet2[6];
    copia(vet1, vet2, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", vet2[i]);
    printf("\n");
}