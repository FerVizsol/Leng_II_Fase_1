#include "persona.h"
#include "persona.cpp"
#include <iostream>
using namespace std;

int main(){
    Persona juan,*mario;
    mario = new Persona;
    juan.ingresar();
    juan.imprimir();
    cin.ignore(256,'\n');
    mario->ingresar();
    mario->imprimir();
    cin.ignore(256,'\n');
    cin.get();
    return 0;
}