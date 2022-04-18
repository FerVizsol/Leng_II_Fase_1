/*////////////////////////////////
ARCHIVO     : fecha.h
DESCRIPCION : Definición de la clase Fecha
*/////////////////////////////////

#pragma once
#include <iostream>
using namespace std;
#include "cliente.h"
class Fecha
{
private:
    int dia;
    int mes;
    int annio;
public:
    void ingresar();
    void imprimir();
    Fecha();// constructor sin parámetros
    Fecha(int, int, int); // constructor con 3 parámetros
};