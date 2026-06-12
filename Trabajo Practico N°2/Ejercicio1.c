
#include <stdio.h>

int main() {
    int calificaciones[10]; 
    int suma = 0, mayor, menor, cont_excelentes = 0;
    float promedio;

  
    for(int i = 0; i < 10; i++) {
        printf("Ingrese la calificacion del estudiante %d (1-10): ", i + 1);
        scanf("%d", &calificaciones[i]);
        suma += calificaciones[i];

    
        if(i == 0) {
            mayor = calificaciones[i];
            menor = calificaciones[i];
        }

   
        if(calificaciones[i] >= 8) {
            cont_excelentes++;
        }

   
        if(calificaciones[i] > mayor) mayor = calificaciones[i];
        if(calificaciones[i] < menor) menor = calificaciones[i];
    }

    
    promedio = (float)suma / 10;

    printf("\n--- RESULTADOS DE LA ENCUESTA ---");
    printf("\nPromedio general: %.2f", promedio);
    printf("\nEstudiantes con nota >= 8: %d", cont_excelentes);
    printf("\nCalificacion mayor: %d", mayor);
    printf("\nCalificacion menor: %d", menor);
    
    printf("\n\nLista de puntajes ingresados:");
    for(int i = 0; i < 10; i++) {
        printf("\nIndice %d: %d", i, calificaciones[i]);
    }

    return 0;
}