#include <iostream>

using namespace std;
/* Se tiene q ingresar el nombre del alumno, la nota
del alumno y el programa debera presentar la observacion
usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente.*/

int main()
{   char nombre[30];
    int notaalu;

    cout<<"Ingresar el Nombre del Alumno---->";
    cin.getline(nombre,30);
    cout<<"Ingresar la nota del Alumno---->";
    cin>> notaalu;

    if ((notaalu>=1) and (notaalu<=59))
    {
        cout<<"Reprobado";
    }
    else if ((notaalu>=60) and (notaalu<=80))
    {
        cout<<"Bueno";
    }
    else if ((notaalu>=81) and (notaalu<=90))
    {
        cout<<"Muy Bueno";
    }
    else if ((notaalu>=90) and (notaalu<=100))
    {
        cout<<"Sobresaliente";
    }
    else
    {
        cout<<"Nota Erronea";
    }

    cout<<"\n";
    cout<<"\n";




    return 0;
}
