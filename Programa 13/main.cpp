#include <iostream>

using namespace std;
/* Ingresar 5 Numeros y determinar cuantos son divisibles
entre 3*/
int main()
{         int num,div3,suma,prom;
          div3=0,suma=0;

          for (int i=0;i<5;i++)
          {
                    cout<<"Ingresar un numero entero--->";
                    cin>> num;
                    if((num%3)==0)
                    {
                              div3++;
                              suma+=num;
                    }
          }
          if(div3>0)
          {
                    prom=suma/div3;
          }
          else
          {
                    prom=0;
          }
          cout<<"Contador de division entre 3 es---->"<<div3<<"\n";
          cout<<"Promedio de los divisibles entre 3--->"<<prom<<"\n";


          return 0;
}
