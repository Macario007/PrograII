#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct alumno
{
          char nombre[30];
          int na,ne,nf;
          char obs[15];
};
alumno alumx;
void ingreso(alumno&alumx)
{
          cout<<"Ingresar nombre del alumno--->";
          cin.getline(alumx.nombre,30);
          cout<<"Ingresar pene Acumulado------>";
          cin>>alumx.na;
          cout<<"Ingresar Nota de Examen------>";
          cin>>alumx.ne;
}
void calcular(alumno&alumx)
{
          alumx.nf=alumx.na+alumx.ne;
          if(alumx.nf>=60)
          {
                    strcpy(alumx.obs,"Aprobado");
          }
          else
          {
                    strcpy(alumx.obs,"Reprobado");
          }
}
void presentar (alumno alumx)
{
          cout<<"El alumno-->"<<alumx.nombre<<"\n""Tiene el Promedio-->"<<alumx.nf<<"\n""Y esta-->"<<alumx.obs<<"\n";

}



int main()
{
          ingreso(alumx);
          calcular(alumx);
          presentar(alumx);

    return 0;
}
