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
{     char nombre[30];
      double ht,hn,extra,pxh,turno,bono,pb,pn,ihss,tp;
          bono=0;

          extra=0;
          turno=0;
          pxh=0;
          tp=0;
      cout<<"Ingresar El Nombre del Empleado--->";
      cin.getline(nombre,30);
      cout<<"Ingresar Las Horas Trabajadas--->";
      cin>> ht;

      extra=ht-40;
      pxh=400;
      if ((ht>=1) and (ht<=40))
      {
                cout<<"Las Horas Trabajadas Son---->"<<ht<<"\n";
      }
      else
      {
                cout<<"Sus Horas Normales Son----->"<<ht-extra<<"\n";
                cout<<"Tiene Horas Extras y Son--->"<<ht-40<<"\n";
      }
      cout<<"Ingresar Turno de Trabajo 1,2 o 3--->";
      cin>> turno;

      if ((turno==1) and (ht>=45))
      {
                cout<<"Turno equivale a --->"<<ht*100+300<<"\n";
                cout<<"Sus Pago x Horas Extras Es-->"<<extra*130<<"\n";
      }
      else
      {
                cout<<"Turno equivale a --->"<<ht*100+100<<"\n";

      }

      if (turno==2)
      {
                cout<<"Turno equivale a --->"<<ht*135+100<<"\n";
                cout<<"Sus Pago x Horas Extras Es-->"<<extra*140<<"\n";
      }
      else
      {
                cout<<"Turno equivale a --->"<<ht*100+100<<"\n";
      }
      if (turno==3)
      {
                cout<<"Turno equivale a --->"<<ht*140+100<<"\n";
                cout<<"Sus Pago x Horas Extras Es-->"<<extra*150<<"\n";
      }
      else
      {
                cout<<"Turno equivale a --->"<<ht*100+100<<"\n";
      }


    pb=pxh*ht;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.035*pb;
    }


    tp=pb+bono+extra-ihss;

    cout<<"Su bono es----->"<<bono<<"\n";
    cout<<"El IHSS es--->"<<ihss<<"\n";
    cout<<"El Pago Bruto es-->"<<pb<<"\n";
    cout<<"El Pago X Hora es-->"<<pxh<<"\n";
    cout<<"El Pago Total es-->"<<tp<<"\n";









    return 0;
}
