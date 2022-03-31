#pragma once 
#include <iostream>
#include <string>
using namespace std;

class Persona{
    private:
    int dni;
    string nombre;
    int edad;
    public:
    void ingresar();
    void imprimir();
    //getters
    int get_Dni();
    string get_Nombre();
    int get_Edad();
    //setters
    void set_Dni(int);
    void set_Nombre(string);
    void set_Edad(int);
};
