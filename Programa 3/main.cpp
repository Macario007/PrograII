#include <iostream>

using namespace std;
/*  Ingresar las horas trabajadas, el pago por hora y calcular el salario
    una deduccion del 5% del salario y el total a pagar q es el sueldo
    restndo las deducciones*/
int main()
{   int horas;
    double pxh,salario,deduccion,tp;

    cout<<"Ingresar las Horas--->";
    cin>> horas;
    cout<<"Ingresar el pago X hora--->";
    cin>> pxh;

    salario = horas * pxh;
    deduccion = salario * 0.05;
    tp = salario - deduccion;

    cout<<"Salario--->"<<salario<<"\n";
    cout<<"Deducciones--->"<<deduccion<<"\n";
    cout<<"Total a Pagar--->"<<tp<<"\n";


    return 0;
}
