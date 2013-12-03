#include <iostream>

using namespace std;
/* Ingresar Nombre del empleado el turno y las horas
    luego determinar el pago por hora pago bruto ihss
    y total a pagar

    turno1=100, turno2=150, turno3=190
    ihss if salario es ariba de 7000 sera igual a 245
    y si no deducir el salario * 3.5

*/
int main()
{   char nombre[30];
    int turno,horas,pxh;
    double ihss,tp,pb;

    cout<<"Ingresar Nombre del Empleado--->";
    cin.getline(nombre,30);

    cout<<"Ingresar el Turno 1,2 o 3--->";
    cin>> turno;

    cout<<"Ingresar las Horas Trabajadas-->";
    cin>> horas;


    if (turno==1)
    {
        pxh=100;
    }
    else if (turno==2)
    {
        pxh=150;
    }
    else if (turno==3)
    {
        pxh=190;
    }
    else
    {
        pxh=0;
    }



    pb=pxh*horas;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.035*pb;
    }

    tp=pb-ihss;

    cout<<"Pago X Hora"<<pxh<<"\n";
    cout<<"Pago Bruto"<<pb<<"\n";
    cout<<"Seguro Social"<<ihss<<"\n";
    cout<<"Total A Pagar"<<tp<<"\n";


    return 0;
}
