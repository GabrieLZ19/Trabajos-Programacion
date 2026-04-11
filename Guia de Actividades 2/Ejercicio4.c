// EJERCICIO 4: FERMENTACIÓN DE VINO PATERO
// Contexto: Un productor artesanal necesita monitorear días de fermentación hasta alcanzar un pH
// ≤ 3.5.
// Requisitos:
// • Usar do-while para garantizar al menos una medición.
// • Mostrar alertas con \a si el pH es peligroso.
// • Aplicar directivas #define PH_SEGURO 3.5.

#include <stdio.h>
#define PH_SEGURO 3.5

int main() {
    float ph;
    int dias = 0;

    do {
        printf("Ingrese el pH del vino patero en el dia %d: ", dias + 1);
        scanf("%f", &ph);
        dias++;

        if (ph > PH_SEGURO) {
            printf("\aAlerta: El pH es peligroso para la fermentacion.\n");
        }
    } while (ph > PH_SEGURO);

    printf("\nEl vino patero ha alcanzado un pH seguro de %.2f despues de %d dias de fermentacion.\n", ph, dias);
    return 0;
}