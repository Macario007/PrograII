#include<iostream>
#include<stdlib.h>
#include<stdio.h>

/*Se tiene que ingresar un número entero, que
sea par o divisible entre 5 usando un procedimiento.

Luego determinar cuantas cifras tiene el número
usando un procedimiento, deberá de ingresar el número generado en el
procedimiento anterior y obtener el número de cifras que será un parámetro de
variable porque va a salir su valor  del procedimiento.

Presentar el número de cifras del número en
el programa principal.

Hacerlo para 5 números, deberá de usar un
ciclo for , y dentro de este colocar los procedimientos y presentar los datos.
*/

using namespace std;
int cifra,num;
void ingresar(int &num)
{
	do
          {
                    cout<<"Ingrese un Numero Par o Divisible entre 5---->";
                    cin>>num;
	}while(!((num%2)==0) and (!(num%5)==0));
}
void cifras(int num, int &cifra)
{
	cifra=0;
	while(num!=0)
          {
		num=(num-num%2)*.10;
		cifra++;
	}
}
void presentar(int cifra, int num)
{
    cout<<"Numero---->"<<num<<"\n";
    cout<<"Cifras---->"<<cifra<<"\n";
}
int main()
{
	for(int i=0;i<5;i++)
          {
                    ingresar(num);
                    cifras(num,cifra);
                    presentar(cifra,num);
	}

        return 0;
}
