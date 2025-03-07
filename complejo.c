#include "complejo.h"
#include <stdio.h>

COMPLEJO AsignaReal(COMPLEJO c, double valor) {
    c.real = valor;
    return c;
}

COMPLEJO AsignaImaginario(COMPLEJO c, double valor) {
    c.imaginario = valor;
    return c;
}

double ParteReal(COMPLEJO c) {
    return c.real;
}

double ParteImaginaria(COMPLEJO c) {
    return c.imaginario;
}

double ModuloDelComplejo(COMPLEJO c) {
    return sqrt(c.real * c.real + c.imaginario * c.imaginario);
}

COMPLEJO Suma_Complejos(COMPLEJO c1, COMPLEJO c2) {
    COMPLEJO resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

void print_complejo(COMPLEJO c) {
    printf("(%.2f, %.2f i)\n", c.real, c.imaginario);
}
