#include <iostream>

using namespace std;

int main(){

int importe;
int descuento;
float total;

cout<< "ingresar impote  " ;
cin>> importe;
cout<< "ingresar descuento   ";
cin>> descuento;
descuento = importe * descuento /100;
total =importe - descuento;
cout<< " el importe es del " <<endl;
cout<< importe <<endl;
cout<< " el descuento es del " <<endl;
cout<< descuento <<endl;
cout<< " el total es del " <<endl;
cout<< total;

return 0;
}

  
