#include<iostream>


using namespace std;

int main()
{   int num,cifra,suma,mayor,menor,prom,par,impar;
    int contador=0;
    par=0;
    impar=0;

    cout<<"Ingrese el numero--->";
    cin>> num;
    suma=0;
    cout<<"Numero al Reves--->";
    menor=9;
    mayor=0;
    while(num>0)
    {
          cifra=num%10;
          cout<<cifra;
          num=num/10;
          suma+=cifra;
     if((cifra%2)==0)
          par++;
     else
          impar++;




     if (cifra>mayor)
        {
            mayor=cifra;
        }



        if (cifra<menor)
        {
            menor=cifra;
        }
        contador++;

    }
    prom=suma/contador;
    cout<<"\n";
    cout<<"El numero de cifras pares es--->"<<par<<"\n";
    cout<<"El Numero de cifras impares es->"<<impar<<"\n";
    cout<<"Suma de las cifras------------->"<<suma<<"\n";
    cout<<"El Numero Mayor es------------->"<<mayor<<"\n";
    cout<<"El Numero Menor es------------->"<<menor<<"\n";
    cout<<"El Promedio de las cifras es--->"<<prom<<"\n";

    return 0;



}
