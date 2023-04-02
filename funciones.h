#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
   Mostrara el saludo inicial, las opciones para la cantidad de jugadores, y el nombre de los jugadores.
*/
int menu_inicio (char [],char[],int,int);

/**
  Desarrolla el juego de un jugAdor
*/
void menu_juego_de_uno(char[],int,int[],int,int[],int ,int);

/**
  Desarrolla el juego de dos jugAdores
*/
void menu_juego_de_dos(char[],char[],int,int[],int,int[],int ,int);

/**
   Cargara la decicion que haya optado el jugador (s o n);
*/
int decision (char [],int,int );

/**
   Lanza el primer tiro
*/
void tirarDados(int [], int , bool, int);

/**
   Muestra los dados lanzados
*/
void mostrarDados(int v[], int tam);

/**
  Lanzara 1 o 2 tiros mas
*/
void otrotirardados (int [],int [],int,bool);

/**
   Ordenara los vectores
*/
void ordenarVector(int[], int[],int,int);

/**
   Mostrara las combinaciones que realizo el jugador
*/
int jugada (int[],int,int[], int);

/**
   Sumara el puntaje en cada ronda
*/
int puntaje(int[], int);


void Partida(int,int,char[],char[],int);


/**
   Menu de los puntajes de los jugadores
*/
//void menu_puntaje (char [],char [],int ,int [],int [],int ,int)

#endif // FUNCIONES_H_INCLUDED
