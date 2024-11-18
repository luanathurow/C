#include <stdio.h>

void inverteVet(int v[], int tam);

void inverteVet(int v[], int tam)
{
    int* ptr1 = v;
    int* ptr2 = v+tam-1;
    while(ptr1 < ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
}

int main()
{
    int vet[] = { 1, 2, 3, 4, 5, 6, 7 };
    for(int i=0; i<7; i++)
        printf("%d ",vet[i]);
    printf("\n");
    inverteVet(vet, 7);
    for(int i=0; i<7; i++)
        printf("%d ",vet[i]);
    printf("\n");

}