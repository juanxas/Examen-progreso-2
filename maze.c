#include <stdio.h>
#include "maze.h"

int maze[FILAS][COLUMNAS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void printMaze(){
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; i < COLUMNAS; j++)
        {
            if (i == 0 && j == 0)
            {
                printf ("X ");
            }else if (maze[i][j]==0)
            {
                printf("0");
            }else {
                printf ("1");
            } 
            
        }
        printf ("\n");
    }
    
}

int validomoviento(int fila, int columna){
        if (fila < 0 || fila >= FILAS || columna < 0 || columna >= COLUMNAS )
    {
        return 0; 
    }
    return 1;
}