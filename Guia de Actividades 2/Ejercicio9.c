// EJERCICIO 9: REFORESTACIÓN DE QUEBRACHOS
// Contexto: Plantar 1000 quebrachos anuales hasta recuperar 10,000 árboles. Considerar sequías
// (años con < 300 mm de lluvia).
// Requisitos:
// • Usar while para años acumulados.
// • Anidar if-else según lluvia ingresada.
// • Incluir #define META 10000.

#include <stdio.h>
#define META 10000

int main() {
    int arboles_plantados = 0;
    int años = 0;
    float lluvia;

    while (arboles_plantados < META) {
        printf("Ingrese la cantidad de lluvia del año %d (en mm): ", años + 1);
        scanf("%f", &lluvia);

        if (lluvia < 300) {
            printf("Año de sequía. Se plantarán 500 quebrachos.\n\n");
            arboles_plantados += 500; // Solo se plantan 500 en años de sequía
        } else {
            printf("Año normal. Se plantarán 1000 quebrachos.\n\n");
            arboles_plantados += 1000; // Se plantan 1000 en años normales
        }

        años++;
    }

    printf("Se han plantado %d quebrachos en %d años para alcanzar la meta de %d árboles.\n", arboles_plantados, años, META);
    return 0;
}