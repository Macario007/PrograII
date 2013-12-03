#include <iostream>

using namespace std;
/*Ingresar la nota acumulada de examen y luego
calcular la nota final y la observacion de reprobado o aprobado
*/

int main()
{   int notaA,notaE,notaF;

    cout<<"Ingresar nota Acumulada-->";
    cin>> notaA;
    cout<<"Ingresar nota Examen----->";
    cin>> notaE;
    notaF= notaA + notaE;
    cout<<"Nota Final--->"<<notaF<<"\n";

    if (notaF>=60)
    {
        cout<<"Estado : Aprobado";
    }
    else
    {
        cout<<"Estado : Reprobado";
    }
    cout<<"\n";

    return 0;
}
