#pragma once

#include <iostream>
#include <string>
using namespace std;

struct fecha{
    int dia;
    int mes;
    int year;
    void ingresar();
    void imprimir();
    int cantidadTiempo(fecha dos);
};