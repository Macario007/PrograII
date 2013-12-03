#include <iostream>

using namespace std;
/*Ingresar 10 numeros al final presentar cuantos fueron divisibles entre 5,
el promedio de los divisibles entre 5 y el numero mayor de todos los numeros*/
int main()
{   int num,mayor,contador,divi5,suma;
    double prom;
    contador=0;
    divi5=0;
    suma=0;

    while(contador<10)
    {     cout<<"Ingresar un numero-->";
          cin>> num;
          if ((num%5)==0)
          {
                    suma+=num;
                    divi5++;
          }
          else
          {
                    suma=0;
                    divi5=0;
          }
          contador++;

          prom=suma/contador;


           if (num>mayor)
        {
            mayor=num;
        }



     }
     cout<<"Numero Mayor es----->"<<mayor<<"\n";
     cout<<"Promedio es--------->"<<prom<<"\n";




    return 0;
}
