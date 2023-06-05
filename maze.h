#define MAZE_H

#define FILAS 5
#define COLUMNAS 5

extern int maze[FILAS][COLUMNAS];

void printMaze();
int validomoviento(int fila, int columna);