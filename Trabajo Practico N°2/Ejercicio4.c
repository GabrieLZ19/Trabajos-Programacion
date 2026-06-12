
#include <stdio.h>
#include <string.h>

struct Carrera {
    char nombre_carrera[50];
    int duracion; 
};

struct Estudiante {
    char nombre_completo[60];
    int edad;
    int legajo;
    struct Carrera datos_carrera; 
};

int main() {
    struct Estudiante lista[5]; 
    int cont_duracion_larga = 0;

    for(int i = 0; i < 5; i++) {
        printf("\n--- Estudiante %d ---", i + 1);
        printf("\nNombre: "); fflush(stdin); gets(lista[i].nombre_completo);
        printf("Edad: "); scanf("%d", &lista[i].edad);
        printf("Legajo: "); scanf("%d", &lista[i].legajo);
        printf("Carrera: "); fflush(stdin); gets(lista[i].datos_carrera.nombre_carrera);
        printf("Duracion años: "); scanf("%d", &lista[i].datos_carrera.duracion);

        if(lista[i].datos_carrera.duracion > 4) cont_duracion_larga++; 
    }

    printf("\n--- LISTADO DE INSCRIPTOS ---");
    for(int i = 0; i < 5; i++) {
        printf("\nLegajo: %d | Estudiante: %s | Carrera: %s", 
               lista[i].legajo, lista[i].nombre_completo, lista[i].datos_carrera.nombre_carrera);
    }

    printf("\n\nEstudiantes en carreras > 4 años: %d", cont_duracion_larga);
    
    return 0;
}