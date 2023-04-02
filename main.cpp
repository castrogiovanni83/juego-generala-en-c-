#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "funciones.h"

using namespace std;

int main(){
    system ("color E2");
    int opcion,t=10,t2=11,t3=5,opc;
    int punto[t2]={},dados[t3];
    char Vnombrejugador1[t]={},Vnombrejugador2[t]={};

     ///SALUDO AL INICIAR EL JUEGO.
    opc=menu_inicio(Vnombrejugador1,Vnombrejugador2,t,opcion);
    menu_juego_de_uno (Vnombrejugador1,t,punto,t2,dados,t3,opc);
    menu_juego_de_dos(Vnombrejugador1,Vnombrejugador2,t,punto,t2,dados,t3,opc);
   // menu_puntaje (Vnombrejugador1,Vnombrejugador2,tam1,puntosj1,puntosj2,tam2,opcion)
    getch ();
    return 0;
}
