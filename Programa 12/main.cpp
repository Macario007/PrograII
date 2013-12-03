#include <iostream>

using namespace std;
/*Ingresar 5 numeros y presentar el promedio de los pares e impares
y luego presentar el numero mayor de los 5 numeros*/
int main()
{   int numero,cpar,cimpar,contador,sumap,sumaimp,mayor,menor;

    double prompares;
    double promimpares;

    sumap=0;
    sumaimp=0;
    contador=0;
    cimpar=0;
    cpar=0;
    mayor=0;
    menor=10000000000000;



    while(contador<5)
    {
        cout<<"Ingrese un numero---->";
        cin>>numero;
        if((numero % 2)==0)
        {
            sumap+=numero;
            cpar++;
        }
        else
        {
            sumaimp+=numero;
            cimpar++;
        }
        contador ++;

        if (numero<menor)
        {
            menor=numero;
        }

        if (numero>mayor)
        {
            mayor=numero;
        }
    }
    cout<<"El Numero Mayor es--->"<<mayor<<"\n";
    cout<<"El Numero Menor es--->"<<menor<<"\n";
    if (sumap!=0)
    {
        prompares=sumap/cpar;
    }
    else
    {
        prompares=0;
    }



    if (sumaimp!=0)
    {
        promimpares=sumaimp/cimpar;
    }
    else
    {
        promimpares=0;
    }


    cout<<"Promedio Pares--->"<<prompares<<"\n";
    cout<<"Promedio Impares-->"<<promimpares<<"\n";




    return 0;
}
