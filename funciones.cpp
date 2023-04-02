#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <time.h>
#include "funciones.h"
using namespace std;


int menu_inicio (char Vnombrej1[],char Vnombrej2[],int t,int opc) {
    cout<<"\t\t¡¡¡BIENVENIDOS AL JUEGO GENERALA!!! "<<endl<<endl;
    cout<<endl<<endl;
    cout<<"\t\n OPCION DE JUEGO: \n\n";
    cout<<"\t\n\n 1.PARA UN JUGADOR \n";
    cout<<"\t\n\n 2.PARA DOS JUGADORES \n\n";
    cin>>opc;
    system ("cls");
    switch(opc) {
    case 1:
        cout<<"\t\nUN JUGADOR\n";
        printf ("\n\tJUGADOR : ");
        scanf ("%s", Vnombrej1);
        cout<<"\n\n\n\t\t¡¡¡QUE INICIE EL JUEGO!!!\n\n";
        system ("pause");
        system ("cls");
        break;
    case 2:
        cout<<"\t\nDOS JUGADORES\n";
        printf ("\n\tJUGADOR 1: ");
        scanf ("%s", Vnombrej1);
        printf ("\n\tJUGADOR 2: ");
        scanf ("%s", Vnombrej2);
        cout<<"\n\n\n\t\t¡¡¡QUE INICIE EL JUEGO!!!\n\n";
        system ("pause");
        system ("cls");
        break;
    default:
        cout<<"OPCION INCORRECTA";
        break;
    }
    return opc;
}


void menu_juego_de_uno(char Vnombrej1[],int t,int punto[],int t2,int vdados[],int t3,int opc){
    int r,respuesta,fin,c, puntajetotj1=0,puntaje1,puntaje2,puntajetotj2;
    bool AZAR=true;
    char Vlanzar[2]={},Vnombrej2[t]={};
    int dados[t3]={},p[t3]={};
    switch (opc) {
    case 1:
        for (int i=0;i<10;i++){
                cout<<"\n------------------------------------------------------------------------------\n"<<endl;
               cout<<"\tTURNO DE: "<<Vnombrej1<<"\t|"<<"\tRONDA: "<<i+1<<"\t|"<<"\tPUNTAJE TOTAL: \t"<<puntajetotj1<<endl;
               cout<<"\n-------------------------------------------------------------------------------\n"<<endl;
               cout<<"PARA TIRAR LOS DADOS PRESIONE SI: "<<endl;
               r=decision (Vlanzar,2,r);
               tirarDados (vdados, t3, AZAR,r);
                mostrarDados (vdados, t3);
                cout<<"\nDESEA VOLVER A LANZAR LOS DADOS: \n";
                respuesta=decision (Vlanzar,2,r);
                fin=0;
                c=1;
                while (respuesta==1&&fin<2) {
                cout<<"\n¿CUANTOS DADOS DESEA VOLVER A TIRAR?\n\t";
                otrotirardados (vdados,dados,t3,AZAR);
                system ("cls");
                 cout<<"\n------------------------------------------------------------------------------\n"<<endl;
                 cout<<"\tTURNO DE: "<<Vnombrej1<<"\t|"<<"\tRONDA: "<<i+1<<"\t|"<<"\tPUNTAJE TOTAL: \t"<<puntajetotj1<<endl;
                 cout<<"\n-------------------------------------------------------------------------------\n"<<endl;
                 mostrarDados (vdados, t3);
                 fin++;
                 cout<<"\nDESEA VOLVER A LANZAR LOS DADOS\n";
                respuesta=decision (Vlanzar,1,r);
                c++;
                }
                ordenarVector(vdados,punto,t3,t2 );
                puntaje1=jugada (vdados,t3,punto,t2);
                puntajetotj1=puntaje (punto,t2);
                system ("pause");
                system ("cls");
                Partida(puntaje1,puntaje2,Vnombrej1, Vnombrej2,t);
                system ("pause");
                system ("cls");
                }
    case 2:
        break;
}
}

void menu_juego_de_dos(char Vnombrej1 [],char Vnombrej2[],int t,int punto[],int t2,int vdados[],int t3,int opc) {
    int r,respuesta,fin,c, puntajetotj1=0, puntajetotj2=0,puntaje1,puntaje2;
    bool AZAR=true;
    char Vlanzar[2]={};
    int dados[t3]={},p[t3]={};
    switch (opc) {
    case 1:
        break;
    case 2:
        for (int i=0;i<10;i++){
                puntaje1=0;
                puntaje2=0;
              c=0;
        for (int x=0;x<2;x++) {
            if (x==0) {
               cout<<"\n------------------------------------------------------------------------------\n"<<endl;
               cout<<"\tTURNO DE: "<<Vnombrej1<<"\t|"<<"\tRONDA: "<<i+1<<"\t|"<<"\tPUNTAJE TOTAL: \t"<<puntajetotj1<<endl;
               cout<<"\n-------------------------------------------------------------------------------\n"<<endl;
               cout<<"PARA TIRAR LOS DADOS PRESIONE SI: "<<endl;
               r=decision (Vlanzar,2,r);
               tirarDados (vdados, t3, AZAR,r);
                mostrarDados (vdados, t3);
                cout<<"\nDESEA VOLVER A LANZAR LOS DADOS: \n";
                respuesta=decision (Vlanzar,2,r);
                fin=0;
                c=1;
                while (respuesta==1&&fin<2) {
                cout<<"\n¿CUANTOS DADOS DESEA VOLVER A TIRAR?\n\t";
                otrotirardados (vdados,dados,t3,AZAR);
                system ("cls");
                 cout<<"\n------------------------------------------------------------------------------\n"<<endl;
                 cout<<"\tTURNO DE: "<<Vnombrej1<<"\t|"<<"\tRONDA: "<<i+1<<"\t|"<<"\tPUNTAJE TOTAL: \t"<<puntajetotj1<<endl;
                 cout<<"\n-------------------------------------------------------------------------------\n"<<endl;
                 mostrarDados (vdados, t3);
                 fin++;
                 cout<<"\nDESEA VOLVER A LANZAR LOS DADOS\n";
                respuesta=decision (Vlanzar,1,r);
                c++;
                }
                ordenarVector(vdados,punto,t3,t2 );
                puntaje1=jugada (vdados,t3,punto,t2);
                puntajetotj1=puntaje (punto,t2);
                system ("pause");
                system ("cls");
            }
            else{
                    if (x==1){
                    cout<<"\n------------------------------------------------------------------------------\n"<<endl;
                    cout<<"\tTURNO DE: "<<Vnombrej2<<"\t|"<<"\tRONDA: "<<i+1<<"\t|"<<"\tPUNTAJE TOTAL: \t"<<puntajetotj2<<endl;
                    cout<<"\n-------------------------------------------------------------------------------\n"<<endl;

               cout<<"PARA TIRAR LOS DADOS PRESIONE SI";
               decision (Vlanzar,2,r);
               tirarDados (vdados, t3, AZAR,r);
                mostrarDados (vdados, t3);
                cout<<"\nDESEA VOLVER A LANZAR LOS DADOS\n";
                respuesta=decision (Vlanzar,2,r);
                fin=0;
                c=1;
                while (respuesta==1&&fin<2) {
                cout<<"\n¿CUANTOS DADOS DESEA VOLVER A TIRAR?\n\t";
                otrotirardados (vdados,dados,t3,AZAR);
                system ("cls");
                 cout<<"\n------------------------------------------------------------------------------\n"<<endl;
                cout<<"\tTURNO DE: "<<Vnombrej2<<"\t|"<<"\tRONDA: "<<i+1<<"\t|"<<"\tPUNTAJE TOTAL: \t"<<puntajetotj2<<endl;
                cout<<"\n-------------------------------------------------------------------------------\n"<<endl;
                fin++;
                c++;
                mostrarDados (vdados,t3);
                cout<<"\nDESEA VOLVER A LANZAR LOS DADOS: \n";
                respuesta=decision (Vlanzar,2,r);
                }
                ordenarVector(vdados,punto,t3,t2);
                puntaje2=jugada (vdados,t3,punto,t2);
                puntajetotj2=puntaje (punto,t2);
                system ("pause");
                system ("cls");}}}
                Partida(puntaje1,puntaje2,Vnombrej1, Vnombrej2,t);
                system ("pause");
                system ("cls");
                }}}


int decision ( char Vlanzar [],int tam, int r){
    scanf ("\n\t%s", Vlanzar);
    for (int i=0;i<1;i++) {if (Vlanzar[0]=='S'||Vlanzar[0]=='s') {r=1;}
        else {if (Vlanzar[0]=='N'||Vlanzar[0]=='n') {r=0;}}}
    return r;}


void tirarDados(int vdados[],int t3,bool AZAR,int r){
    vdados[t3]={};
    if (r==1){
    srand(time(NULL));
    for(int i=0;i<t3;i++){
            if (AZAR==true) {vdados[i]=(rand()%6)+1;}}}
}


void mostrarDados(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){cout<<v[i]<<"\t";}
    cout<<endl;}


void ordenarVector(int v[],int punto[], int tam,int t2 ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;}
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
        }
    if((v[0]==v[1])&&(v[1]==v[2])&&(v[2]==v[3])&&(v[3]==v[4])) {punto [9]=50;}
    if (((v[0]==v[1])&&(v[1]==v[2])&&(v[2]==v[3]))||((v[1]==v[2])&&(v[2]==v[3])&&(v[3]==v[4]))) {punto[8]=40;}
    if (((v[0]==v[1])&&(v[1]==v[2]))&&((v[3]==v[4])&&(v[0]!=v[3]))||((v[0]==v[1])&&((v[2]==v[3])&&(v[3]==v[4]))&&(v[0]!=v[3]))) {punto [7]=30;}
    if ((v[0]==(v[1]-1))&&(v[1]==(v[2]-1))&&(v[2]==(v[3]-1))&&(v[3]==(v[4]-1))) {punto [6]=25;}}


void otrotirardados (int vdados[],int vec2[],int otro,bool AZAR){
    int i,n,m,v2[otro]={},v3[otro]={};
    srand(time(NULL));
     for( i=0;i<otro;i++){
            if (AZAR==true) {vec2[i]=(rand()%6)+1;}
     }
    cin>>n;
    cout<<"\n\n\t¿CUALES?\n\n";
    for (i=0;i<n;i++){cin>>m;
        v3[i]=m;}
        for (i=0;i<otro;i++){
            if ((v3[i]-1)==i){vdados[i]=vec2[i];}}}

int jugada (int vdados[],int t3,int punto[], int t2){
    int I, Max=0,Jugador[t2]={};
    bool Jugado[2]={false};

    for (int i=0;i<t3;i++){
        if (vdados[i]==1){punto[0]+=vdados[i];}
        if (vdados[i]==2){punto[1]+=vdados[i];}
        if (vdados[i]==3){punto[2]+=vdados[i];}
        if (vdados[i]==4){punto[3]+=vdados[i];}
        if (vdados[i]==5){punto[4]+=vdados[i];}
        if (vdados[i]==6){punto[5]+=vdados[i];}
    }
    for(int z=0; z<(t2); z++){
        if((z==0)){Max=punto[0];I=z;}
        else{
        if((punto[z]>Max) && (Jugado[z]==false)){Max=punto[z];I=z;}}}

        Jugado[I]=true;

        switch(I){
            case 0: cout<<"COMBINACION DE UNO"; break;
            case 1: cout<<"COMBINACION DE DOS"; break;
            case 2: cout<<"COMBINACION DE TRES"; break;
            case 3: cout<<"COMBINACION DE CUATRO"; break;
            case 4: cout<<"COMBINACION DE CINCO"; break;
            case 5: cout<<"COMBINACION DE SEIS"; break;
            case 6: cout<<"COMBINACION DE ESCALERA"; break;
            case 7: cout<<"COMBINACION DE FULL"; break;
            case 8: cout<<"COMBINACION DE POKER"; break;
            case 9: cout<<"COMBINACION DE GENERALA"; break;
            case 10: cout<<"COMBINACION DE GENERALA SERVIDA"; break;
            }

        cout<<"\t\t CON EL PUNTAJE "<<Max<<"  Jugado  "<<Jugado[I]<<endl;
        return Max;}


 int puntaje(int punto[], int t2){
    int i, suma=0;
    for(i=0;i<t2;i++){
        suma+=punto[i];

    }
    return suma;
 }

void Partida(int puntaje1,int puntaje2,char Vnombrej1 [],char Vnombrej2[],int t){
    int p;
    if (puntaje1>puntaje2) {p=puntaje1;
     cout<<"------------------------------------------------------------------------------"<<endl;
     cout<<"------------------------------------------------------------------------------"<<endl;
     cout<<"\n\n\tGANADOR/A:"<<Vnombrej1<<endl<<"con puntaje: " <<p<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;}
    else{if(puntaje1<puntaje2){p=puntaje2;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n\tGANADOR/A:"<<Vnombrej2<<endl<<"con puntaje: " <<p<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;}}
    cout<<"PROXIMO TURNO: "<<Vnombrej1;}





