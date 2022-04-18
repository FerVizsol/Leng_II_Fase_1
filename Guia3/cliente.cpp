/*///////////////////////////////////
ARCHIVO     : cliente.cpp
DESCRIPCION : Definición de los métodos de la clase Cliente
*////////////////////////////////////

#include "producto.h"
#include "cliente.h"
#include "tiempo.h"
//Constructor Cliente
Cliente::Cliente(int i=0, float f=0, Producto* p=0, Tiempo * t=0)// parámetros por defecto
: DNI(i), saldo(f), idProducto(p), horaCompra(t) // lista de inicialización
{
}
void Cliente::imprimirProducto()
{
    idProducto->imprimir();
}
void Cliente::comprar(Producto *ptrProducto)
{
    idProducto = ptrProducto;
    saldo = idProducto->getPrecio();
    idProducto->vender(this);
}
void Cliente::ingresar()
{
    cout << "INGRESAR DATOS DE CLIENTE: " << endl;
    cout << "========================= " << endl;
    cout << "DNI: ";
    cin >> DNI;
    cout << "Saldo: ";
    cin >> saldo;
    system("cls");
}
void Cliente::imprimir()
{
    cout << "DATOS DE CLIENTE: " << endl;
    cout << "================ " << endl;
    cout << "DNI: " << DNI << endl;
    cout << "saldo: " << saldo << endl;
    system("PAUSE");
    system("cls");
}