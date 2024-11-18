#include <stdio.h>

/*Escreva uma função que receba um tempo em total de segundos desde a meia-noite,
retornando por referência o tempo em horas, minutos e segundos correspondentes.*/

void converterTempo(int totalSegundos, int *horas, int *minutos, int *segundos) {
    *horas = totalSegundos / 3600;            // Converte para horas
    totalSegundos %= 3600;                    // Resto após remover as horas

    *minutos = totalSegundos / 60;            // Converte para minutos
    *segundos = totalSegundos % 60;           // O que sobra são os segundos
}

int main() {
    int totalSegundos, horas, minutos, segundos;

    printf("Digite o tempo em segundos desde a meia-noite: ");
    scanf("%d", &totalSegundos);

    // Converte os segundos para horas, minutos e segundos
    converterTempo(totalSegundos, &horas, &minutos, &segundos);

    // Exibe o resultado
    printf("Tempo: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
