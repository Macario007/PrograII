#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*ingresar el nombre del alumno luego debemos de pedir
las tres notas parciales usando un ciclo presentar el promedio
la nota mayor de los 3 parciales
preguntar si desea continuar al final presentar el nombre del
alumno con la mejor nota*/
int main()
{         char nombre[30];
          char resp;
          int nota,prom,notamax,alumnomax,suma;
          char nombremayor[30];
          int notamayor;
          char estado[15];


          do
          {
                    cout<<"Ingresar el Nombre del Alumno--->";
                    cin.getline(nombre,30);
                    suma=0;
                    notamax=0;
                    for (int i=1;i<=3;i++)
                    {
                              cout<<"Ingresar la Nota del Parcial "<<i<<"-->";
                              cin>> nota;
                              suma+=nota;

                              if (notamax<nota)
                              {
                                        notamax=nota;
                              }
                    }
                    prom=suma/3;
                    if (prom>=60)
                    {
                              strcpy(estado,"Aprobado");
                    }
                    else
                    {
                              strcpy(estado,"Reprobado");
                    }
                    cout<<"La Nota Maxima es--->"<<notamax<<"\n";
                    cout<<"Promedio es--------->"<<prom<<"\n";
                    cout<<"El estado del alumno es--->"<<estado<<"\n";
                    _flushall();
                    if(alumnomax<prom)
                    {
                              alumnomax=prom;
                              strcpy(nombremayor,nombre);
                    }
                    do
                    {
                              cout<<"Desea Continuar---->";
                              cin.get(resp);
                    }while ((resp!='s')and (resp!='n'));
                     _flushall ();
          }while (resp!='n');
          cout<<"Nombre del alumno con la mejor nota"<<nombremayor<<"\n";
          cout<<"Con la Nota"<<alumnomax<<"\n";




    return 0;
}
