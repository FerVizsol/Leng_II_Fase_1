/*////////////////////////////////
ARCHIVO     : u_runproducto.cpp
FECHA       : 12/04/2022
DESCRIPCION : Definición de los métodos de la clase Tiempo
*/////////////////////////////////

#include "producto.h"
#include "cliente.h"
#include "producto.cpp"
#include "cliente.cpp"
#include "fecha.h"
#include "fecha.cpp"
#include "tiempo.h"
#include "tiempo.cpp"
#include <ctime>
#include <vector>

int Menu();
void menuMetodos(int a);
time_t t = time(0);
tm* now = localtime(&t);
Fecha hoy(now->tm_mday,now->tm_mon,now->tm_year+1900);
Fecha ayer(now->tm_mday-1,now->tm_mon,now->tm_year+1900);
Tiempo ahora(now->tm_hour,now->tm_min,now->tm_sec);
vector<Producto>ListaProductos;
Cliente *pCliente = 0;
Producto *pProducto = 0;
Cliente nuevo(0,0,pProducto,&ahora);


int main()
{
    nuevo.ingresar();
    Inicio:
    menuMetodos(Menu());
    goto Inicio;
}


int Menu(){
    int elec=0;
    cout << "\t\tMENU DE COMPRAS\n";
    cout << "\t\t===============\n";
    cout << "1. Agregar Productos"<< endl;
    cout << "2. Comprar productos"<< endl;
    cout << "3. Mostrar mis articulos" << endl;
    cout << "4. Salir" << endl;
    cout << "==========================" << endl;
    do{
        cout << "Elija la operacion a realizar: ";
        cin >> elec;
        cout << endl;
    }while(elec<1 || elec>4);
    return elec;
    }

void menuMetodos(int a){
    switch(a){
        case 1:
        {
            Producto nuevo(0,0,pCliente,hoy);
            nuevo.ingresar();
            ListaProductos.push_back(nuevo);
            cout << "Producto Agregado!" << endl;
            system("PAUSE");
            system("cls");
            break;
        }
        case 2:
        {
            int cont=0, elec=0;
            cout << "\t\tLISTA DE ARTICULOS\n";
            cout << "\t\t==================\n";
            for (auto i : ListaProductos){
                cont++;
                cout << cont << ". " << i.getNombre() << "\t" << i.getPrecio() << endl;
            }
            do{
                cout << "Elija el num. del producto que desea comprar: ";
                cin >> elec;
            }while(elec<1 || elec>cont);
            nuevo.comprar(&ListaProductos[elec-1]);
            cout << "Se compro el articulo..." << endl;
            system("PAUSE");
            system("cls");
            break;
        }
        case 3:
        {
            nuevo.imprimirProducto();
            break;
        }
        case 4:
        {
            exit(0);
        }
    }
}