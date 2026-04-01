// Problema: Desarrollar un programa en C que permita “Calcular el costo total de
// producción de vino en una bodega riojana, considerando litros producidos, costo por litro
// y descuentos por volumen. que solicite datos básicos, realice un cálculo y muestre el
// resultado. Se pide aplicar:
// o Identificadores válidos para variables y constantes.
// o Reglas de ámbito (alcance de variables locales y globales).
// o Uso de comentarios para explicar la lógica del proceso.

#include <stdio.h>

// Definición de constantes para los descuentos por volumen

#define DESCUENTO_10 0.10 // Descuento del 10% para más de 1000 litros
#define DESCUENTO_5 0.05 // Descuento del 5% para más de 500 litros


// Variables Globales

char nombre_bodega[]= "Bodega Riojana"; // Nombre de la bodega, accesible en todo el programa

int main() {

    // Variables locales para almacenar los datos de entrada y resultados

    float litros_producidos; // Cantidad de litros producidos
    float costo_por_litro;   // Costo por litro
    float descuento = 0.0;  // Descuento aplicado por volumen
    float costo_total;       // Costo total de producción

    // Solicitar al usuario la cantidad de litros producidos
    printf("Ingrese la cantidad de litros producidos: ");

    if(scanf("%f", &litros_producidos) != 1) { // Si ingresa un valor no numérico, mostrar mensaje de error
        printf("Entrada invalida. Por favor, ingrese un numero.\n");
        return 1; // Salir con error si la entrada no es válida
    }

    // Solicitar al usuario el costo por litro
    printf("Ingrese el costo por litro: ");
    
    if(scanf("%f", &costo_por_litro) != 1) { // Si ingresa un valor no numérico, mostrar mensaje de error
        printf("Entrada invalida. Por favor, ingrese un numero.\n");
        return 1; // Salir con error si la entrada no es válida
    }

    // Calcular el descuento basado en el volumen producido
    if (litros_producidos > 1000) {
        descuento = DESCUENTO_10; // 10% de descuento para más de 1000 litros
    } else if (litros_producidos > 500) {
        descuento = DESCUENTO_5; // 5% de descuento para más de 500 litros
    }

    // Calcular el costo total antes del descuento
    costo_total = litros_producidos * costo_por_litro;

    // Aplicar el descuento al costo total
    costo_total = costo_total - (costo_total * descuento);

    // Mostrar el resultado final al usuario
    printf("\n Resumen de produccion en %s:\n", nombre_bodega);
    printf(" Litros producidos: %.2f\n", litros_producidos);
    printf(" Costo por litro: %.2f\n", costo_por_litro);
    printf(" Descuento aplicado: %.2f%%\n", descuento * 100);
    printf(" Costo total de produccion: %.2f\n", costo_total);


    return 0;
}