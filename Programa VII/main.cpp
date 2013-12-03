#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>


/*
   ingresar cinco numeros a un arreglo usando un procedimiento, luego calcular el factorial de
   cada uno de los elementos del arreglo y copiarlo en otro arreglo. Usar una funcion para
   calcular el factorial. y procedimiento para copiarlo en otro arreglo.
*/

using namespace std;

int num[5] ;
int tam = 5 ;
int fact[5] ;
int cop[5] ;


// Procedimiento para ingresar datos

void ingresoi( int num[], int tam)
{
  int i ;

  for( i=0; i<tam; i++ )
    {  cout << "Ingresar el numero " << i << " :" ;
       cin >> num[i] ;                              }
}


// Procedimiento para presentar

void presentar (int num[], int fact[], int tam)
{
  int i ;

  for ( i=0; i<tam; i++ )
     {  cout << num[i] << "\n" ;
        cout << "El factorial de " << num[i] << " es " << fact[i] << ". \n" ;  }
}


// Funcion para calcular e factorial de un numero a la vez

int factorial (int numero)
{
    int fac = 1 ;
    int i ;

    for (i=1; i <= (numero) ; i++)
       { fac = fac * (i) ; }

    return fac ;
}


// Procedimiento para calcular el factorial de todos

void factorialdetodos(int num[], int fact[], int tam)
{
    int i ;

    for (i=0; i<tam; i++)
       { fact[i] = factorial(num[i]) ; }
}


// Procedimiento para copiarlo en otro arreglo

void copiado(int num[], int fact[], int tam, int cop[])
{
    int i ;

    for (i=0; i<5; i++)
    {
       cop[i] = fact[i] ;
       cout << cop[i] << ". \n" ;
    }
}


int main()
{

    ingresoi(num, tam) ;
    factorialdetodos(num, fact, tam);
    presentar(num, fact, tam) ;

    cout << "El nuevo arreglo: " << "\n" ;

    copiado(num, fact, tam, cop) ;

    cout << "\n" ;
    system("PAUSE");
    return 0;
}
