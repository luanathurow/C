#include <stdio.h>

typedef struct {
    float p1;
    float p2;
    float trab;
    int faltas;
} Aluno;

int main()
{
    Aluno aluno1, aluno2;

    aluno1.p1 = 10;
    aluno1.p2 = 7.5;
    aluno1.trab = 8;
    aluno2.p1 = 6.5;
    aluno2.p2 = 4.8;

    // aluno1 = aluno2; //isso é permitido (Todos os campos de aluno1, receberam os valores de aluno2)

}
