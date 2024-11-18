#include <stdio.h>

void bubble(int v[], int tam);

void bubble(int v[], int tam)
{
    for(int i=0; i<tam; i++) {
        int* p1 = v;
        int* p2 = v+1;
        for(int j=0; j<tam-i-1; j++) {
            if(*p1 > *p2) {
                int temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
            p1++;
            p2++;
        }
    }
}

int main()
{
    int vet[] = { 3, 8, 1, 4, 2, 9, 5 };
    for(int i=0; i<7; i++)
        printf("%d ",vet[i]);
    printf("\n");
    bubble(vet, 7);
    for(int i=0; i<7; i++)
        printf("%d ",vet[i]);
    printf("\n");
}