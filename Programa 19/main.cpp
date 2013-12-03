#include <iostream>

using namespace std;
/*Ingresar el Nombre del empleado,el turno y las ventas
validar q el turno solo sea 1,2 o 3,(usando un proceso)

calcular usando un proceso, la comision ganada, el ihss,
y total a pagar 1=5%,2=3%,3=6%.

presentar los datos calculados usando un procedimiento,
*/

char nombre[30];
int turno,ventas,ihss,comision,tp;

void ingreso (char nombre[],int&ventas,int&turno)
{
          cout<<"Ingresar Nombre del Empleado---->";
          cin.getline(nombre,30);

          do
          {
                    cout<<"Ingresar Turno---->";
                    cin>> turno;
          }while((turno<1) and (turno>3));

          cout<<"Ingresar Las Ventas---->";
          cin>> ventas;

}

void calcular (int turno,int ventas,int ihss,int comision,int tp)
int main()
{
    cout
    return 0;
}
