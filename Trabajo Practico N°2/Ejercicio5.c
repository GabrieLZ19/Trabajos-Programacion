
#include <stdio.h>

typedef struct {
    char nombre[60];
    int edad;
    float promedio;
    int anio_ingreso;
} Estudiante; 

int main() {
    Estudiante alumnos[20]; 
    int suma_edades = 0, antes_2020 = 0, mejor_idx = 0;

    for(int i = 0; i < 20; i++) {
        printf("\nEstudiante %d:", i + 1);
        printf("\nNombre: "); fflush(stdin); gets(alumnos[i].nombre);
        
      
        do { printf("Edad (>17): "); scanf("%d", &alumnos[i].edad); } while(alumnos[i].edad <= 17);
        
        printf("Promedio general: "); scanf("%f", &alumnos[i].promedio);
        
        
        do { printf("Año ingreso (>=2000): "); scanf("%d", &alumnos[i].anio_ingreso); } while(alumnos[i].anio_ingreso < 2000);

        suma_edades += alumnos[i].edad;
        if(alumnos[i].anio_ingreso < 2020) antes_2020++; 
        if(alumnos[i].promedio > alumnos[mejor_idx].promedio) mejor_idx = i;
    }

    printf("\n--- ESTADISTICAS ---");
    printf("\nEstudiante con mejor promedio: %s (%.2f)", alumnos[mejor_idx].nombre, alumnos[mejor_idx].promedio);
    printf("\nPromedio de edades: %.2f", (float)suma_edades / 20);
    printf("\nIngresaron antes de 2020: %d", antes_2020);

    return 0;
}