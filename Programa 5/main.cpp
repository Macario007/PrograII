#include <iostream>

using namespace std;
/* Ingresar la nota del alumno y el programa debera de presentar
la observacion usando la siguiente tabla:
1 a 59 Reprobado
60 a 80 Bueno
81 a 90 Muy Bueno
91 a 100 Exelente
*/
int main()
{   int nota;

    cout<<"Ingresar Nota del Alumno---->";
    cin>> nota;

    if (nota<60)
    {
        cout<<"Alumno Reprobado"<<"\n";
    }
    else if (nota<80)
    {
        cout<<"Bueno"<<"\n";
    }
    else if (nota<90)
    {
        cout<<"Nota Muy Buena"<<"\n";
    }
    else
    {
        cout<<"Nota Sobresaliente"<<"\n";
    }
    cout<<"\n";


    return 0;
}
