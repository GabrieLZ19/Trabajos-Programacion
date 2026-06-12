
#include <stdio.h>

int main() {
    int asistencia[5][3]; 
    int total_por_dia[3] = {0, 0, 0};
    int total_por_turno[5] = {0, 0, 0, 0, 0};
    int total_general = 0;
    int max_asistencia = -1, dia_max = 0;

  
    for(int f = 0; f < 5; f++) {
        for(int c = 0; c < 3; c++) {
            printf("Turno %d, Dia %d - Cantidad de asistentes: ", f + 1, c + 1);
            scanf("%d", &asistencia[f][c]);
            
          
            total_por_turno[f] += asistencia[f][c];
            total_por_dia[c] += asistencia[f][c];
            total_general += asistencia[f][c];
        }
    }

    
    printf("\n--- MATRIZ DE ASISTENCIA ---");
    for(int f = 0; f < 5; f++) {
        printf("\nTurno %d: ", f + 1);
        for(int c = 0; c < 3; c++) {
            printf("[%d] ", asistencia[f][c]);
        }
    }

  
    printf("\n\nTotal por Turno:");
    for(int f = 0; f < 5; f++) printf("\nTurno %d: %d", f + 1, total_por_turno[f]);

    printf("\n\nTotal por Dia:");
    for(int c = 0; c < 3; c++) {
        printf("\nDia %d: %d", c + 1, total_por_dia[c]);
       
        if(total_por_dia[c] > max_asistencia) {
            max_asistencia = total_por_dia[c];
            dia_max = c + 1;
        }
    }

    printf("\n\nDia con mayor concurrencia: Dia %d con %d asistentes", dia_max, max_asistencia);
    printf("\nTotal general de asistentes: %d\n", total_general); 

    return 0;
}