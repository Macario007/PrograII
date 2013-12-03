#include <iostream>
Ingresar 5 numeros a un arreglo.

los numeros deberan de estar entre 50-100.

usando una funcion debera de obtener la suma de los numeros
divisibles entre 5.

crear una funcion para determinar el promedio de los numeros
pares.

crear un procedimiento para modificar el arreglo y colocar 0 a
todos los numeros q son pares.

crear un procedimiento para presentar el arreglo.

const int tam=4;
int arreglo[4];
int sumaA,promP;

void ingresar(int arreglo[])
{
          for (int i=0;i<=tam;i++)
          {
                    do
                    {
                              cout<<"Ingresar un Numero---->";
                              cin>> arreglo[i];
                    }while (!((arreglo[i]>=50)and(arreglo[i]<=100)))

          }
}
int numerosdivisibles5 (int arreglo[])
{         int suma=0;
          for (int i=0;i<=tam;i++)
          {
                    if (arreglo[i]%5==0)
                    suma+=arreglo[i];
          }
          return suma;

}
int promediopares(int arreglo[])
{         int contador++;
          int promP=0;
          for (int i=0;i<=tam;i++)
          {
                    if(arreglo[i]%2==0)
                    suma+=arreglo[i]/contador;
          }
          return promP;

}
using namespace std;

int main()
{
    return 0;
}
