#pragma once

#include "fecha.h"
#include <iostream>
#include <string>
using namespace std;

class Ilusion
{
private:
    string *razon;
    int nivel;
    fecha fechaInicio;
    fecha fechaFin;
    int nroRazones;

public:
    void inicio();
    void final();
    void aumentar();
    void disminuir();
    void decepcion();
    void copium();
};