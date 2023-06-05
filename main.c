#include <stdio.h>
#include "maze.h"
#include "player.h"

void nuevoGame(){
    printMaze();

    char movimiento;
    while (1)
    {
        printf ("Ingrese el movimiento (WASD):");
        printf ("%c", &movimiento);
        movejugador(movimiento);

    }
    
}

void mostrarCreditos(){
    printf ("-----Creditos-----\n");
    printf ("Este juego fue creado por [_Juan_David_Calle_ ID: A00095612].\n ");
    printf ("Espero que lo disfrutes\n");
} 

int main(){
    int opcion;
    while (1)
    {
        printf("==== MENU ====\n");
        printf ("1. Nuevo juego\n");
        printf ("2. Creditos\n");
        printf ("3. Salir\n");
        printf ("Ingrese una opcion:");
        scanf("&d", &opcion);

        switch (opcion)
        {
        case 1:
            nuevoGame();
            break;
        case 2:
            mostrarCreditos();
            break;
        case 3:
            return 0;
        default:
            printf ("Opcion invalida\n");
            
        }
    }

}

