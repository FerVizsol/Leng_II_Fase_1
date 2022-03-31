#include "persona.h"
#include <iostream>
#include <string>
using namespace std;

void Persona::imprimir(){
    cout << "\t" << nombre << endl;
    cout << "Dni: " << dni << endl;
    cout << "Edad: " << edad << endl;
};
void Persona::ingresar(){
    int nuevo;string strnuevo;
    cout << "Ingrese el nombre: "; getline(cin,strnuevo); set_Nombre(strnuevo); cout << endl;
    cout << "Ingrese el DNI: "; cin >> nuevo; set_Dni(nuevo); cout << endl;
    cout << "Ingrese la edad: "; cin >> nuevo;set_Edad(nuevo); cout << endl;
};

//getters
int Persona::get_Dni(){return dni;}
string Persona::get_Nombre(){return nombre;}
int Persona::get_Edad(){return edad;}
//setters
void Persona::set_Dni(int nuevo){dni=nuevo;}
void Persona::set_Nombre(string nuevo){nombre=nuevo;}
void Persona::set_Edad(int nuevo){edad=nuevo;}