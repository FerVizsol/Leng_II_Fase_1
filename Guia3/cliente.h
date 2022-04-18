/*////////////////////////////////
ARCHIVO     : cliente.h
DESCRIPCION : Definición de la clase Cliente
*/
////////////////////////////////

#pragma once
#include <iostream>
using namespace std;
#include "producto.h"
#include "tiempo.h"
class Producto; // declaración previa de la clase Producto
class Cliente
{
private:
    int DNI;
    float saldo;
    Producto *idProducto; // asociacion binaria, segundo enlace mediante un puntero del tipo clase Producto
    Tiempo *horaCompra;   // agregacion
public:
    void comprar(Producto *);
    void ingresar();
    void imprimir();
    void imprimirProducto();
    Cliente(int, float, Producto *, Tiempo *); // constructor de clase Cliente
};