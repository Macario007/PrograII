#include <iostream>

using namespace std;
/*
ingresar 5 numeros y contar cuantos son positivos, negativos y ceros.
*/
int main()


{
    int numero, positivos, ceros, negativos ,contador

    cpositivos=0;cnegativos=0;cceros=0;contador=0;

    while(contador<5)

    {
      cout<<"ingresar un numero.....>";
      cin>> numero ;

      if(numero>0)
      {
          cpositivos++;
      }

      else if (numero<0)
      {

          cnegativos++;
      }
      else
      {
          cceros++;
      }
    }contador++;
    cout<<"contador de positivos.."<<cpositivos<<"\n";
    cout<<"contador de negativos.."<<cnegativos<<"\n";
    cout<<"contador de ceros.."<<cceros <<"\n";


    return 0;
}
