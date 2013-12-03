#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;
/*Elaborar un programa donde ingresemos un numero entre 1 y 100
luego preguntar si deseamos ingresar otro numero
al finalizar presentar la suma de los numeros ingresados*/
int main()
{   int num,suma,contador;
    char resp;
    suma=0;
    contador=0;

    do
    {         do
              {
                    cout<<"Ingresar Un numero entre 1 y 100->";
                    cin>> num;
              }while((num<1)or (num>100));


              suma+=num;
              _flushall();
              do
              {
                        cout<<"Desea Continuar---->";
                        cin.get(resp);
              }
              while((resp!='n') and (resp!='s'));
    }
              while (resp!='n');

              cout<<"La suma de los Numeros es-->"<<suma<<"\n";
              cout<<"Final Programa";

    return 0;
}
