// #generar un arreglo de 30 por 30 caracteres que se asemeje a una piramide invertida de space invaders

#include <stdio.h>

#define SIZE 30

int main() {
    char pyramid[SIZE][SIZE];

    // Llenar el arreglo con espacios
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            pyramid[i][j] = ' ';
        } 
    }

    // Llenar el arreglo con caracteres para formar la pirámide invertida

    for(int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i <= j && j <= SIZE - i) { // si el índice de la columna está entre el índice de la fila y el tamaño menos el índice de la fila, entonces se coloca un asterisco
                pyramid[i][j] = '*'; 
            }
        }
    }

    // Imprimir el arreglo
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", pyramid[i][j]);
        }
        printf("\n");
    }

    return 0;
}