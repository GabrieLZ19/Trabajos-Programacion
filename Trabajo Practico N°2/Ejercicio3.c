
#include <stdio.h>
#include <ctype.h>

int main() {
    char mensaje[101]; 
    int letras = 0, digitos = 0, espacios = 0;

    printf("Ingrese su mensaje (max 100 caracteres): ");
    gets(mensaje); 

    for(int i = 0; mensaje[i] != '\0'; i++) {
        if(isalpha(mensaje[i])) letras++; 
        else if(isdigit(mensaje[i])) digitos++;
        else if(isspace(mensaje[i])) espacios++; 
    }

    printf("\n--- ANALISIS DEL MENSAJE ---");
    printf("\nCantidad de letras: %d", letras); 
    printf("\nCantidad de digitos: %d", digitos); 
    printf("\nCantidad de espacios: %d", espacios); 

    printf("\n\nMensaje en MINUSCULAS: "); 
    for(int i = 0; mensaje[i] != '\0'; i++) putchar(tolower(mensaje[i]));

    printf("\nMensaje en MAYUSCULAS: "); 
    for(int i = 0; mensaje[i] != '\0'; i++) putchar(toupper(mensaje[i]));

    printf("\n");
    return 0;
}