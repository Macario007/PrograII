#include <iostream>

using namespace std;
/*
estructucturas de repeticion
ingresar 5 numeros y presentar al final del ciclo la sumas de los numeros ingresados.
*/
int main()
{ int numero, contador, suma;

   contador=0;
   suma=0;

   while(contador<5)
   {
       cout<<"ingresar un numero,,,>";
       cin>> numero;
       contador++;// contador= contador *!

       suma+= numero;// suma=suma+ numero
   }


    cout <<"suma de los numero es "<<suma<<"\n";
    return 0;
}
