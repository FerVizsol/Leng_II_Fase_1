/*////////////////////////////////
ARCHIVO     : tiempo.h
DESCRIPCION : Definición de la clase Tiempo
*/////////////////////////////////

#pragma once
#include <iostream>
using namespace std;
class Tiempo
{
private:
    int hora;
    int minuto;
    int segundo;
public:
    void ingresar();
    void imprimir();
    Tiempo(int, int, int);// parámetros por defecto
};