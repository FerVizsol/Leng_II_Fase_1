/*////////////////////////////////
ARCHIVO     : producto.h
DESCRIPCION : Definición de la clase Producto
*/////////////////////////////////

#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "fecha.h"
#include "cliente.h"
class Producto
{
private: 
//atributos de clase
    int idProducto;
    string nombre;
    float precio;
    Cliente *DNI;//asociacion binaria, primer enlace mediante puntero
    Fecha fechaExpiracion;//compocisión, objeto de clase Fecha
public:
    // constructor de clase
    Producto(int, float, Cliente *, Fecha);
    void vender(Cliente *);
    void ingresar();
    void imprimir();
    float getPrecio();
    string getNombre();
    void imprimirCliente();
};