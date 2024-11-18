#include <stdio.h>

typedef struct {
  float numerador;
  float denominador;
} Fracao;

float calcula(Fracao* frac) {
    return frac->numerador / frac->denominador;  
}

int main() {
  Fracao f1;
  f1.numerador = 10;
  f1.denominador = 2;
  printf("Valor: %f\n", calcula(&f1));
}
