// EJERCICIO 1: CÁLCULO DE COSECHA DE OLIVOS
// Contexto: La Rioja es reconocida por su producción de aceitunas. Un agricultor necesita un
// programa para calcular el total de aceitunas cosechadas en sus 5 fincas, discriminando por calidad
// (Premium, Estándar, Baja).
// Requisitos:
// • Usar for para iterar por finca.
// • Anidar if-else para clasificar calidad según peso (Premium ≥ 100 kg, Baja < 50 kg).
// • Mostrar resultados con printf usando especificadores %d, %f y códigos como \t.
// • Incluir la directiva #define MAX_FINCAS 5.

#include <stdio.h>
#define MAX_FINCAS 5

int main() {
    int finca;
    float peso, total_premium = 0, total_estandar = 0, total_baja = 0;

    for (finca = 1; finca <= MAX_FINCAS; finca++) {
        printf("Ingrese el peso de aceitunas cosechadas en la finca %d (kg): ", finca);
        scanf("%f", &peso);

        if (peso >= 100) {
            total_premium += peso;
        } else if (peso >= 50) {
            total_estandar += peso;
        } else {
            total_baja += peso;
        }
    }

    printf("\nResultados:\n");
    printf("Total de aceitunas Premium: %.2f kg\n", total_premium);
    printf("Total de aceitunas Estándar: %.2f kg\n", total_estandar);
    printf("Total de aceitunas Baja: %.2f kg\n", total_baja);

    return 0;
}