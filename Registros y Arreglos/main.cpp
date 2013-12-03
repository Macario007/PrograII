#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct empleados
{
          char nombre[30];
          int ventas,comis;
};
const int tam=5;

empleados emple[tam];
empleados emplemax;
empleados mayor empleado(empleado emple[])
{         empleados auxmayor;
          auxmayor.comis=0
          for (int i=0;i<tam;i++)
          {
                    if(auxmayor.comis<emple[i].comis)
                              auxmayor=emple[i];
          }
          return auxmayor;
}
void ingreso(empleados emple[])
{
          for (int i=0;i<tam;i++)
          {
                    cout<<"Ingresar el Nombre del Empleado---->";
                    cin.getline(emple[i].nombre,30);
                    cout<<"Ingresar Ventas--->";
                    cin>>emple[i].ventas;
                    _flushall();
          }
}
void calcular(empleados emple[])
{
          for (int i=0;i<tam;i++)
          {
                    emple[i].comis=emple[i].ventas*0.05;
          }
}
void presentar(empleados emple[])
{
           for (int i=0;i<tam;i++)
           {
                     cout<<"El Empleado--->"<<emple[i].nombre<<"\n";
                     cout<<"Una Comision de--->"<<emple[i].comis<<"\n";
           }
}
int main()
{
    ingreso(emple);
    calcular(emple);
    presentar(emple);
    emplemax=mayorempleado(emple);
    cout<<"El Empleado q obtubo la mejor comision es--->"<<emplemax.nombre<<"\n"
    cout<<"Con la comision de----->"<<emplemax.comis<<"\n";

    return 0;
}
