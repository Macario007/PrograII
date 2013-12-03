#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
/*ingresar la base y el exponente usando un procedimiento
luego calcular la base y el exponente usando una funcion
luego preguntar si desea continuar usando una funcion para devolver
una respuesta s o n valida*/

char respuesta()
{
          char resp;
          do
          {
                    cout<<"Desea Continuar---->";
                    cin.get(resp);
          }while ((resp!='s')and (resp!='n'));
          return resp;
}
int ingreso(int&base,int&expo)
{
          cout<<"Ingresar la Base------->";
          cin>>base;
          cout<<"Ingresar el exponente-->";
          cin>> expo;

}
int potencia(int base,int expo)
{
          int pot=1;

          for(int i=0;i<expo;i++)
          {
                    pot*=base;
          }
          return pot;
}

int main()
{         char resp;
          int base,expo,poten;
          do
          {
                    ingreso(base,expo);
                    poten=potencia(base,expo);
                    _flushall();
                    cout<<"La Potencia es----->"<<poten<<"\n";
                    resp=respuesta();
          }while (resp!='n');

    return 0;
}
