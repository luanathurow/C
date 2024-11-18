#include <stdio.h>

/*Escreva uma função que receba um vetor de inteiros, mais a quantidade de valores presentes nele, 
e retorne um número inteiro correspondente à quantidade de valores que aparecem mais de uma vez. 
Exemplo: se o vetor for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 (2 números se repetem, 2 e 3).*/

#define TAMANHO_MAX 100 // Tamanho máximo do vetor

int main() {
    int vetor[TAMANHO_MAX]; // Vetor para armazenar os valores
    int n, i = 0;

    printf("Digite os valores (digite -1 para parar):\n");

    // Loop para inserir valores no vetor
    while (i < TAMANHO_MAX) {
        printf("Digite um valor: ");
        scanf("%d", &n);

        if (n == -1) { // Condição de parada
            break;
        }

        vetor[i] = n; // Insere o valor no vetor
        i++;          // Incrementa o índice
    }

    // Exibe os valores inseridos
    printf("\nValores inseridos no vetor:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", vetor[j]);
    }
    printf("\n");

    return 0;
}

