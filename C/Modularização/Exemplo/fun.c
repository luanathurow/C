#include "fun.h"

float fatorial(int v) {
    int res = 1, i;
    for(i=1; i<=v; i++) res = res * i;
    return res;
}

float somatorio(int v) {
    float soma = 0, i;
    for(i=1; i<=v; i++) soma += i;
    return soma;
}