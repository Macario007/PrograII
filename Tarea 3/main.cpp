#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*Ingresar un numero comprendido entre 50-150 y tiene que ser par,
validar el ingreso usando do/while, luego preguntar si desea
continuar usar una variable de tipo char para la respuesta y
esta deberá de ser validada para que solo responda S o N,
al final presentar cual fue el numero mayor y menor*/
int main()
{         char resp;
          int mayor=0,menor=9999999999,num=0;
          do
          {
          cout<<"Ingrese el numero----->";
          cin>>num;
          _flushall();
          if(num%2==0 && num>=50 && num<=150)
          {
                    if(mayor<num)
          {
                    mayor=num;
          }
                    if(menor>num)
          {
                    menor=num;
          }
          }
          else
          {
                    cout<<"<----NUMERO ERRONEO---->";
          }
          do
          {
                    cout<<"Desea continuar----->";
                    cin.get(resp);
                    _flushall();
          }while(resp!='n' and resp!='s');

}         while(resp!='n');

		cout<<"mayor"<<mayor<<"\n";
		cout<<"menor"<<menor<<"\n";
          return 0;
}
