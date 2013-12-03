#include <iostream>

using namespace std;
void calcular(int &sueldo,int &ihss)
{
          if (sueldo>7000)
          {
                    ihss=245;
          }
          else
          {
                    ihss=0.035*sueldo;
          }
          sueldo=sueldo*1.20;
}
int main()
{         int sueldo;
          int ihss=0;

          cout<<"Ingresar Sueldo--->";
          cin>> sueldo;
          calcular (sueldo,ihss);
          cout<<"Sueldo---->"<<sueldo<<"\n";
          cout<<"IHSS------>"<<ihss<<"\n";

    return 0;
}
