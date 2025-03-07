#include "complejo.h"
#include <stdio.h>

int main() {
    COMPLEJO c1, c2, suma;

    c1 = AsignaReal(c1, 3.0);
    c1 = AsignaImaginario(c1, 4.0);
    c2 = AsignaReal(c2, 1.5);
    c2 = AsignaImaginario(c2, -2.5);

    printf("Primer numero complejo: ");
    print_complejo(c1);
    printf("Segundo numero complejo: ");
    print_complejo(c2);
    
    printf("Parte real de c1: %.2f\n", ParteReal(c1));
    printf("Parte imaginaria de c1: %.2f\n", ParteImaginaria(c1));
    printf("Modulo de c1: %.2f\n", ModuloDelComplejo(c1));
    
    suma = Suma_Complejos(c1, c2);
    printf("Suma de c1 y c2: ");
    print_complejo(suma);
    
    return 0;
}
