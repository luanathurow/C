#include <stdio.h>

/*Escreva uma função para um caixa de banco, que recebe um valor inteiro R
e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia 
R. Faça de forma que o número de notas usado seja o menor possível, retornando 
as quantidades de notas por referência.*/


int main ()
{
    int R, notas100, notas50, notas10, notas5, notas1;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &R);

    notas100 = R / 100; 
    R %= 100;             

    notas50 = R / 50;    
    R %= 50;              

    notas10 = R / 10;    
    R %= 10;              

    notas5 = R / 5;     
    R %= 5;               

    notas1 = R; 

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 1: %d\n", notas1);

    return 0; //finalizou o programa corretamente
}