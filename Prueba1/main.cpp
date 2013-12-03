#include <iostream>

using namespace std;
/*Ingresar el nombre del empleado las horas trabajadas
luego determinar las horas normales q son las primeras
40 y las extras q son mayores a 40; debera de obtener
pago x hora usando el turno luego un bono, el pago bruto
q son la suma de los pagos normales y extras ihss y total
a pagar.

turno  pn            pe
1      100           130
2      135           140
3      140           150

bono si el empleado es de turno 1 y trabajo mas de 45 horas
el bono es de 300 y si no es de 100.
para el IHSSS el pago bruto mayor a 7000 es de 245 y si no el pago bruto por 3.5%.
*/

int main()
{   char emple[25];
    int htr,turno,hno,hex,pn,pe,bono;
    double ihss,pb,tp;

    cout<<"Nombre del Empleado----->";
    cin.getline(emple,25);
    cout<<"Horas Trabajadas-------->";
    cin >> htr;
    cout<<"Ingresar Turno 1,2o3---->";
    cin >> turno;

    if (htr>40)
    {
        hno=40;
        hex=htr-40;
    }
    else
    {
        hno=htr;
        hex=0;
    }

    if (turno==1)
    {
        pn=100*hno;
        pe=130*hex;
    }
    else if (turno==2)
    {
        pn=135*hno;
        pe=140*hex;
    }
    else if (turno==3)
    {
        pn=140*hno;
        pe=138*hex;
    }
    else
    {
        pn=0;
        pe=0;
    }

    if ((turno==1) and (htr>45))
    {
        bono=300;
    }
    else
    {
        bono=100;
    }

    pb=pn+pe+bono;


    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=(pb*0.035);
    }

    tp=pb+bono-ihss;

    cout<<"Horas Normales---------->"<<hno<<"\n";
    cout<<"Horas Extras------------>"<<hex<<"\n";
    cout<<"Pago Normal------------->"<<pn<<"\n";
    cout<<"Pago Extra-------------->"<<pe<<"\n";
    cout<<"Bono-------------------->"<<bono<<"\n";
    cout<<"Pago Bruto-------------->"<<pb<<"\n";
    cout<<"IHSS-------------------->"<<ihss<<"\n";
    cout<<"Total a Pagar----------->"<<tp<<"\n";

    return 0;
}
