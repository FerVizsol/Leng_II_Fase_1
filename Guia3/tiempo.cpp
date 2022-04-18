/*////////////////////////////////
ARCHIVO     : tiempo.cpp

DESCRIPCION : Definición de los métodos de la clase Tiempo
*/////////////////////////////////

#include "tiempo.h"
void Tiempo::ingresar()
{
    cout << "hora: ";
    cin >> hora;
    cout << "minuto: ";
    cin >> minuto;
    cout << "segundo: ";
    cin >> segundo;
}
void Tiempo::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << endl;
}
// constructor tiempo
Tiempo::Tiempo(int d=0, int m=0, int a=0)
{
    hora = d;
    minuto = m;
    segundo = a;
}