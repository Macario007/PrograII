#include <iostream>

using namespace std;
/*  Ingresar un numero y determinar si es negativo o positivo
*/

int main()
{   int num;

    cout<<"Ingresar Numero--->";
    cin>> num;

    if (num>0)
    {
        cout<<"El Numero es Positivo"<<"\n";
    }
    else if (num<0)
    {
        cout<<"El Numero es Negativo"<<"\n";
    }
    else
    {
        cout<<"El Numero es Cero"<<"\n";
    }

        cout<<"\n";


    return 0;
}
