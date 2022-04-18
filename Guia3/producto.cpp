/*////////////////////////////////
ARCHIVO     : producto.cpp
DESCRIPCION : Definición de los métodos de la clase Producto
*/////////////////////////////////

#include "producto.h"
#include "cliente.h"
// Constructor Producto
Producto::Producto(int i, float f, Cliente *c, Fecha f1)
:fechaExpiracion(f1) //lista de inicializacion
{
    this->idProducto = i; // this es un puntero que llama al objeto que llamó al método
    this->precio = f;
    this->DNI = c;
    //this->fechaExpiracion = f1;//incorrecto
}
// método get
float Producto::getPrecio()
{
    return precio;
}
// método del tipo interface de clase
void Producto::vender(Cliente *ptrCliente)
{
    // Cliente *: se recibe en el método un puntero del tipo clase Cliente
    DNI = ptrCliente;
}
void Producto::ingresar()
{
    cout << "INGRESAR DATOS DE PRODUCTO: " << endl;
    cout << "========================== " << endl;
    cout << "IdProducto: ";
    cin >> idProducto;
    cin.ignore();
    cout << "NombreProducto: ";
    getline(cin,nombre);
    cout << "Precio: ";
    cin >> precio;
    cout << "Fecha de Expiracion: ";
    fechaExpiracion.ingresar();// objeto fechaExpiracion llama al método ingresar()
    system("cls");
}
void Producto::imprimir()
{
    cout << "DATOS DE PRODUCTO: " << endl;
    cout << "================== " << endl;
    cout << "idProducto: " << idProducto << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "precio: " << precio << endl;
    cout << "Fecha de Expiracion: ";
    fechaExpiracion.imprimir();
    system("PAUSE");
    system("cls");
}
void Producto::imprimirCliente()
{
    DNI->imprimir();
}
string Producto::getNombre(){
    return nombre;
};