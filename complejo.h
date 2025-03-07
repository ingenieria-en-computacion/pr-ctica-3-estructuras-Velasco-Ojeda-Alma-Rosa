#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__

#include <math.h>

// Definimos la estructura para representar un número complejo
typedef struct {
    double real;
    double imaginario;
} COMPLEJO;

// Prototipos de las funciones
COMPLEJO AsignaReal(COMPLEJO, double);
COMPLEJO AsignaImaginario(COMPLEJO, double);
double ParteReal(COMPLEJO);
double ParteImaginaria(COMPLEJO);
double ModuloDelComplejo(COMPLEJO);
COMPLEJO Suma_Complejos(COMPLEJO, COMPLEJO);
void print_complejo(COMPLEJO);

#endif
