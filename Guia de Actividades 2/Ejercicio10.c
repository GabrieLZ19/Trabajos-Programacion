// EJERCICIO 10: ASISTENCIA AL FESTIVAL DEL TINKUNACO
// Contexto: Contabilizar asistentes a tres eventos (ritual, música, gastronomía) durante 3 días.
// Requisitos:
// • Usar for anidados (días y eventos).
// • Calcular porcentajes con %% y %.1f.
// • Validar aforo con if dentro del ciclo.

#include <stdio.h>
#define DIAS 3
#define EVENTOS 3

int main() {
    int asistentes, total_asistentes = 0;
    const char* eventos[] = {"Ritual", "Música", "Gastronomía"};

    for (int dia = 1; dia <= DIAS; dia++) {
        printf("Día %d:\n", dia);

        for (int evento = 0; evento < EVENTOS; evento++) {
            printf("Ingrese el número de asistentes al evento %s: ", eventos[evento]);
            scanf("%d", &asistentes);
            total_asistentes += asistentes;

            if (asistentes > 100) { // Suponiendo un aforo máximo de 100 personas por evento
                printf("Aforo excedido en el evento %s del día %d. Se han registrado %d asistentes.\n", eventos[evento], dia, asistentes);
            }
        }
        printf("\n");
    }

    float porcentaje_ritual = (float)total_asistentes / (DIAS * EVENTOS * 100) * 100; // Porcentaje respecto al aforo total
    printf("Total de asistentes en el festival: %d\n", total_asistentes);
    printf("Porcentaje de asistencia respecto al aforo total: %.1f%%\n", porcentaje_ritual);

    return 0;
}

