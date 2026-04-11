// EJERCICIO 2: CONTROL DE VISITANTES AL PARQUE NACIONAL TALAMPAYA
// Contexto: El parque recibe turistas diariamente. Se requiere contabilizar visitantes hasta alcanzar
// el límite de 200 personas o finalizar el día.
// Requisitos:
// • Usar while para ingresar visitantes por hora.
// • Validar con if si se supera el límite.
// • Formatear salida con %-10s para horarios y \n para tabular.

#include <stdio.h>
#include <string.h>

#define LIMITE_VISITANTES 200

int main() {
    int visitantes = 0;
    char horario[10];

    while (visitantes < LIMITE_VISITANTES) {
        printf("Ingrese el horario (HH:MM) o 'fin' para terminar: ");
        scanf("%s", horario);

        if (strcmp(horario, "fin") == 0) { // Comparar con "fin" para finalizar el ingreso de horarios
            break;
        }

        int nuevos_visitantes;
        printf("Ingrese el numero de visitantes en el horario %s: ", horario);
        scanf("%d", &nuevos_visitantes);

        if (visitantes + nuevos_visitantes > LIMITE_VISITANTES) {
            printf("Limite de visitantes alcanzado. No se pueden agregar mas visitantes.\n");
            break;
        }

        visitantes += nuevos_visitantes;
    }

    printf("\nTotal de visitantes hoy: %d\n", visitantes);
    return 0;
}