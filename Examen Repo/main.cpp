#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main()
{         int num=0;
          int prom=0;
          int suma2=0;
          char resp;
          int contador=0;
          int mayor=0;

          do
          {
              int num=0;
              int num2=0;
              int digito=0;
              int suma=0;
              int prom=0;

          do
          {
          cout<<"Ingrese el numero----->";
          cin>>num;
          suma2+=num;
          contador++;

          }
          while(!((num%2)==0) or (num<=1) or (num>=200));
          num2=num;
          while(num2>0)
          {
          num2=num2*.10;
          digito=digito+1;
          }while
          (digito>0)
          {
          num2=num;
          while(num2>9)
          {
          num2=num2*.10;
          }
          suma=suma+num2;
          int mul=num2,cont=digito;
          while(cont>1)
          {
          mul=mul*10;
          cont=cont-1;
          }
          num=num-mul;
          digito=digito-1;
          }
          cout<<"La Suma de las cifras es---->"<<suma<<"\n";
          _flushall();
          if (num>mayor)
          {
                    mayor=num;
          }
          do
          {
          cout<<"Desea continuar?--->";
          cin.get(resp);
          _flushall();
          }while((resp!='n') and (resp!='s'));
          }while(resp!='n');

          prom=suma2/contador;

          cout<<"Su Promedio es------>"<<prom<<"\n";
          cout<<"Su Numero Mayor es-->"<<mayor<<"\n";

    return 0;
}
