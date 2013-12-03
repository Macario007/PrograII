#include <iostream>

using namespace std;
/*ingresar 5 numeros pares validar q el numero sea par.*/
int main()
{   int num;
    for (int i=0;i<5;i++)
    {
              do
              {
                        cout<<"Ingresar un Numero par--->";
                        cin>> num;
              }while (!((num % 2)==0));
    }
    return 0;
}
