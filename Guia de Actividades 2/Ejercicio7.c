// EJERCICIO 7: NIVEL DE AGUA EN DIQUE LOS SAUCES
// Contexto: El dique debe mantenerse entre 60% y 85% de capacidad. Ingresar mediciones hasta
// que esté en rango.
// Requisitos:
// • Usar do-while para solicitar mediciones.
// • Mostrar alertas en rojo usando \x1b[31m (códigos de escape).

#include <stdio.h>
#define MIN_NIVEL 60
#define MAX_NIVEL 85

int main() {
    float nivel;
    int mediciones = 0;

    do {
        printf("Ingrese el nivel de agua en el dique (en %%): ");
        scanf("%f", &nivel);
        mediciones++;

        if (nivel < MIN_NIVEL) {
            printf("\x1b[31mAlerta: El nivel de agua es demasiado bajo (%.2f%%).\x1b[0m\n", nivel);
        } else if (nivel > MAX_NIVEL) {
            printf("\x1b[31mAlerta: El nivel de agua es demasiado alto (%.2f%%).\x1b[0m\n", nivel);
        } else {
            printf("El nivel de agua esta dentro del rango seguro (%.2f%%).\n", nivel);
        }
    } while (nivel < MIN_NIVEL || nivel > MAX_NIVEL);

    printf("\nEl dique ha alcanzado un nivel seguro de %.2f%% despues de %d mediciones.\n", nivel, mediciones);
    return 0;
}