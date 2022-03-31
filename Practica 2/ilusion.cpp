#include <iostream>
#include <string>
#include "ilusion.h"
#include "fecha.h"
#include "fecha.cpp"
using namespace std;

    string *razon;
    int nivel;
    fecha fechaInicio;
    fecha fechaFin;
    int nroRazones;
    void Ilusion::inicio(){
        razon = new string[nroRazones];
        cout << "Ingrese el numero de razones: "; cin >> nroRazones; cin.ignore(256,'\n');
        for(int i=0; i<nroRazones; i++){
            cout << "Ingrese la razon: ";getline(cin,razon[i]); cout << endl;
        }
        cout << "Ingrese Intensidad: "; cin >> nivel;
    }
    void Ilusion::final(){
        fechaFin.ingresar();
        nivel=0;
        delete []razon;
    }
    void Ilusion::aumentar(){
        nivel++;
    }
    void Ilusion::disminuir(){
        nivel--;
    }
    void Ilusion::decepcion(){
        cout << "I want to die so badly..." << endl;
    }
    void Ilusion::copium(){
        cout << "Surely it'll be fine..." << endl;
    }