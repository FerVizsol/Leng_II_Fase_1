#pragma once
#include <iostream>
#include <string>
#include "fecha.h"
using namespace std;

void fecha::ingresar(){
    cout << "Dia: "; cin >> dia;
    cout << "Mes: "; cin >> mes;
    cout << "Año: "; cin >> year;

}
void fecha::imprimir(){
    cout << "Dia: "; cout << dia << endl;
    cout << "Mes: "; cout << mes << endl;
    cout << "Año: "; cout << year << endl;
}
