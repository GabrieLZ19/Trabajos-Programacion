// EJERCICIO 8: ESTADÍSTICAS DEL MUSEO ROSARIO VERA PEÑALOZA
// Contexto: Registrar visitantes mensuales y aplicar descuento si superan 500 en verano
// (diciembre-febrero).
// Requisitos:
// • Usar for para 12 meses.
// • Anidar if para verificar meses de verano.
// • Mostrar meses con %s usando nombres abreviados (Ej: "Dic").

#include <stdio.h>

int main() {
    int visitantes;
    float descuento = 0;
    const char* meses[] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

    for (int mes = 0; mes < 12; mes++) {
        printf("Ingrese el numero de visitantes en %s: ", meses[mes]);
        scanf("%d", &visitantes);

        if ((mes == 11 || mes == 0 || mes == 1) && visitantes > 500) { // Diciembre, Enero, Febrero
            descuento = visitantes * 0.10; // Descuento del 10%
            printf("Descuento aplicado para %s: $%.2f\n\n", meses[mes], descuento);
        } else {
            printf("No se aplica descuento para %s.\n\n", meses[mes]);
        }
    }

    return 0;
}