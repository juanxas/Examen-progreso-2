#include <stdio.h>
#include "maze.h"
#include "player.h"

int playerFila = 0;
int playerColumna = 0;
int moviconta = 0;

void movejugador(char dirección){
    int nuevafila = playerFila;
    int nuevacolumna = playerColumna;

    switch (dirección)
    {
    case 'W':
        nuevafila = playerFila -1;
        break;
    case 'S':
        nuevafila = playerFila +1;
        break;
    case 'A':
        nuevacolumna = playerColumna -1;
        break;
    case 'D':
        nuevacolumna = playerColumna +1;
        break;
    default:
        printf ("Movimiento invalido\n");
        return;
    }

    if (validomoviento(nuevafila,nuevacolumna))
    {
        playerFila = nuevafila;
        playerColumna = nuevacolumna;
        moviconta++;
        printMaze();

        if (ganaste())
        {
            printf ("Ganaste guapeton\n");
            if (moviconta <=8)
            {
                printf ("Eres un Pro!\n");
            } else if (moviconta <=15)
            {
                printf ("Eres un novato papa\n");
            } else {
                printf ("Eres un noob\n");
            }
            resetPlayer();
        }
        
    } else{
        printf ("Movimiento invalido\n");
    }

}

int validomoviento(int fila, int columna){
    if (fila < 0 || fila >= FILAS || columna < 0 || columna >= COLUMNAS )
    {
        return 0; 
    }
    return 1;
}

int ganaste(){
    return ( playerFila == FILAS -1 ) && ( playerColumna == COLUMNAS);
}

void resetPlayer(){
    playerFila = 0;
    playerColumna = 0;
    moviconta= 0;
}
