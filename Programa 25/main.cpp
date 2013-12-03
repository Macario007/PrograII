#include <iostream>

using namespace std;
/*Elaborar un procedimiento para ingresar un
numero entre 1-10.
Lugeo determinar el factorial del numero ingresado
usando una funcion.
hacerlo para 5 numeros(usar ciclo for)
*/
int ingresar(int&num)
{
          do
          {
                    cout<<"Ingresar un Numero entre 1 y 10---->";
                    cin>>num;
          }while ((num>=1)and(num<=10));
}

int main()
{         int num;



    return 0;
}
