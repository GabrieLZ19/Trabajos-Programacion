// EJERCICIO 3: EFICIENCIA DE PANELES SOLARES
// Contexto: En La Rioja se instalan paneles solares. Calcular el rendimiento diario (en %) de 10
// paneles y promediar solo los que superen 70%.
// Requisitos:
// • Usar for para ingresar datos.
// • Anidar if dentro del ciclo para filtrar valores.
// • Emplear %.2f y \\% para mostrar porcentajes.

#include <stdio.h>
#define MAX_PANELES 10

int main() {
    float rendimiento, suma_rendimiento = 0;
    int contador_paneales = 0;

    for (int i = 1; i <= MAX_PANELES; i++) {
        printf("Ingrese el rendimiento del panel solar %d (en %%): ", i);
        scanf("%f", &rendimiento);

        if (rendimiento > 70) {
            suma_rendimiento += rendimiento;
            contador_paneales++;
        }
    }

    if (contador_paneales > 0) {
        float promedio = suma_rendimiento / contador_paneales;
        printf("\nEl rendimiento promedio de los paneles que superan el 70%% es: %.2f%%\n", promedio);
    } else {
        printf("\nNo hay paneles que superen el 70%% de rendimiento.\n");
    }

    return 0;
}