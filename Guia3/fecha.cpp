/*////////////////////////////////
ARCHIVO     : fecha.cpp
DESCRIPCION : Definición de los métodos de la clase Fecha
*/////////////////////////////////

#include "fecha.h"
void Fecha::ingresar()
{
    cout << "dia: ";
    cin >> dia;
    cout << "mes: ";
    cin >> mes;
    cout << "annio: ";
    cin >> annio;
}
void Fecha::imprimir()
{
    cout << dia << "/" << mes << "/" << annio << endl;
}
Fecha::Fecha()
{
    dia = 1;
    mes = 1;
    annio = 1900;
}
// Constructor fecha
Fecha::Fecha(int d, int m, int a)
{
    dia = d;
    mes = m;
    annio = a;
}