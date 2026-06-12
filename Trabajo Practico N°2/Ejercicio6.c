
#include <stdio.h>

struct Permisos {
    unsigned int entrar : 1; 
    unsigned int usar_equipo : 1;
    unsigned int configurar : 1;
};

union Identificacion {
    int libreta;
    int legajo;
    int idTecnico;
};

struct Usuario {
    int tipo; 
    union Identificacion id;
    struct Permisos p;
};

int main() {
    struct Usuario lab[2]; 
    int aux_p;

    for(int i = 0; i < 2; i++) {
        printf("\nUsuario %d:", i + 1);
        printf("\nTipo (0:Est, 1:Doc, 2:Tec): "); scanf("%d", &lab[i].tipo);

        if(lab[i].tipo == 0) {
            printf("Ingrese Libreta: "); scanf("%d", &lab[i].id.libreta);
        } else if(lab[i].tipo == 1) {
            printf("Ingrese Legajo: "); scanf("%d", &lab[i].id.legajo);
        } else {
            printf("Ingrese ID Tecnico: "); scanf("%d", &lab[i].id.idTecnico);
        }

        printf("Permiso entrar (0/1): "); scanf("%d", &aux_p); lab[i].p.entrar = aux_p;
        printf("Permiso usar equipo (0/1): "); scanf("%d", &aux_p); lab[i].p.usar_equipo = aux_p;
        printf("Permiso configurar (0/1): "); scanf("%d", &aux_p); lab[i].p.configurar = aux_p;
    }

    printf("\n--- REGISTRO DE ACCESO ---");
    for(int i = 0; i < 2; i++) {
        printf("\nUsuario %d | Tipo: %d", i + 1, lab[i].tipo);
        if(lab[i].tipo == 0) printf(" | ID: %d", lab[i].id.libreta);
        else if(lab[i].tipo == 1) printf(" | ID: %d", lab[i].id.legajo);
        else printf(" | ID: %d", lab[i].id.idTecnico);
        
        printf("\nPermisos: Entrar[%d] Usar[%d] Config[%d]", 
               lab[i].p.entrar, lab[i].p.usar_equipo, lab[i].p.configurar);
    }
    return 0;
}