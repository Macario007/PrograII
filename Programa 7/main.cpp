#include <iostream>

using namespace std;
/*Ingresar el nombre del alumno la nota acumulada y la nota de examen
y despues determinar la nota y ajustarla a 60 si esta entre 57 y 59*/
int main()
{   char nombre[30];
    int examen,acumulado,nf;

    cout<<"Ingresar el Nombre del alumno--->";
    cin.getline(nombre,30);
    cout<<"Ingresar Nota de Examen--->";
    cin>> examen;
    cout<<"Ingresar acumulado--->";
    cin>> acumulado;

    nf=examen+acumulado;

    if ((nf>=57)and (nf<=59))
    {
        nf=60;
    }

    cout<<"Nota Final es--->"<<nf<<"\n";

    return 0;
}
