#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int arreglo[5];

void descendente(int arreglo[])
{
	for(int cont1=1;cont1<5;cont1++)
          {
          for(int cont2=0;cont2<5;cont2++)
          {
          if(arreglo[cont1]>arreglo[cont2])
          {
          int temp=arreglo[cont2];

          arreglo[cont2]=arreglo[cont1];
          arreglo[cont1]=temp;
          }
          }
          }
}
void ascendente(int arreglo[])
{
	for(int cont1=1;cont1<5;cont1++)
          {
          for(int cont2=0;cont2<5;cont2++)
          {
          if(arreglo[cont1]<arreglo[cont2])
          {
          int temp=arreglo[cont2];
          arreglo[cont2]=arreglo[cont1];
          arreglo[cont1]=temp;
          }
          }
	}
}
void sustituirpares(int arreglo[])
{
          for(int cont=0;cont<5;cont++)
          {
          if(arreglo[cont]%2==0)
          {
          arreglo[cont]=0;
          }
          }
}
void ingresar(int arreglo[])
{
	for(int cont=0;cont<5;cont++)
          {
		cout<<"Ingrese un numero---->";
		cin>>arreglo[cont];
	}
}
void presentar(int arreglo[]){
	for(int cont=0;cont<5;cont++)
          {
		cout<<" "<<arreglo[cont];
	}
	cout<<"\n";
}
int main()
{
	ingresar(arreglo);
	ascendente(arreglo);
	cout<<"Ascendente---->";
	presentar(arreglo);
	descendente(arreglo);
	cout<<"Descendente---->";
	presentar(arreglo);
	sustituirpares(arreglo);
	cout<<"Reemplazar #Pares X 0---->";
	presentar(arreglo);
        return 0;
}
