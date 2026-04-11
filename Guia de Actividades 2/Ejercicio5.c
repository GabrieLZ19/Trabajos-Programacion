// EJERCICIO 5: VENTA DE PONCHOS EN FERIA ARTESANAL
// Contexto: En la feria de Chilecito se venden ponchos de tres tamanos (S, M, L). Calcular ingresos
// diarios.
// Requisitos:
// - Usar switch para asignar precios.
// - Anidar for para 7 dias.
// - Formatear precios con $%.2f y \t

#include <stdio.h>
#define DIAS 7

int main() {
    
    char tamano;
    int cantidad;
    float precio, ingresos_diarios;

    for (int dia = 1; dia <= DIAS; dia++) {
        ingresos_diarios = 0; // Reiniciar ingresos diarios para cada dia
        printf("Dia %d:\n", dia);

        for (int i = 0; i < 3; i++) { // Para cada tamano de poncho
            printf("Ingrese el tamano del poncho (S, M, L) y la cantidad vendida: ");
            scanf(" %c %d", &tamano, &cantidad); // Leer tamano y cantidad

            switch (tamano) {
                case 'S': // Poncho S
                case 's': 
                    precio = 25.00;
                    break;
                case 'M': // Poncho M
                case 'm':
                    precio = 35.00;
                    break;
                case 'L': // Poncho L
                case 'l':
                    precio = 45.00;
                    break;
                default:
                    printf("Tamano no valido. Intente nuevamente.\n");
                    continue; // Saltar a la siguiente iteracion si el tamano es invalido
            }

            ingresos_diarios += precio * cantidad; // Calcular ingresos diarios
        }
        printf("Ingresos del dia %d: $%.2f\n\n", dia, ingresos_diarios);
    }

    return 0;
}