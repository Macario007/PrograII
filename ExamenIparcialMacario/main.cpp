#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main()
{   int num,suma,conta,mayor,prom;
    char resp;
    prom=0;
    suma=0;
    mayor=0;

    do
    {
          do
          {
                    cout<<"Ingresar un Numero Par, >1 X <200---->";
                    cin>> num;
          }while (!(((num%2)==0)) or (num>=1) or (num<=200));






          do
              {
                        cout<<"Desea Continuar---->";
                        cin.get(resp);
              }
              while((resp!='n') and (resp!='s'));
    }
              while (resp!='n');

    cout<<"Su numero mayor es--------------->"<<mayor<<"\n";
    cout<<"El Promedio de sus numeros es---->"<<prom<<"\n";


    return 0;
}
