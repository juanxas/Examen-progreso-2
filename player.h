#define PLAYER_H

extern int playerFila;
extern int playerColumna;
extern int moviconta;

void movejugador (char dirección);
int ganaste();
void resetPlayer();