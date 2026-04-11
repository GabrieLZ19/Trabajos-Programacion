// EJERCICIO 6: MONITOREO DE GUANACOS EN RESERVAS
// Contexto: Contar guanacos en 3 reservas durante 5 años. Identificar años con población < 100.
// Requisitos:
// • Usar for anidados (años y reservas).
// • Validar con if dentro de los ciclos.
// • Usar #define ANIOS 5.

#include <stdio.h>
#define ANIOS 5

int main() {
    int guanacos, total_guanacos;
    int poblacion_baja = 0;

    for (int ano = 1; ano <= ANIOS; ano++) {
        total_guanacos = 0;
        printf("Ano %d:\n", ano);

        for (int reserva = 1; reserva <= 3; reserva++) {
            printf("Ingrese el numero de guanacos en la reserva %d: ", reserva);
            scanf("%d", &guanacos);
            total_guanacos += guanacos;
        }

        if (total_guanacos < 100) {
            printf("Poblacion baja en el ano %d: %d guanacos\n\n", ano, total_guanacos);
            poblacion_baja++;
        } else {
            printf("Poblacion adecuada en el ano %d: %d guanacos\n\n", ano, total_guanacos);
        }
    }

    printf("Numero de anos con poblacion baja: %d\n", poblacion_baja);
    return 0;
}
