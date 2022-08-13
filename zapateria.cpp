#include <iostream>

using namespace std;

int menu()
{
    int opc;
    do{
    cout << "[1]: Productos."<<endl;
    cout << "[2]: Ventas."<< endl;
    cout << "[3]: Datos de la empresa"<< endl;
    cout << "[4]: Salir"<< endl;
    cout << "Ingrese una opcion:[";cin>>opc;cout << "]";
    }
    while(opc<1 or opc>4);
    return opc;
}

int submenu1()
{
    int opc;
    do{
    cout << "1. Crear Inventario"<< endl;
    cout << "2. Mostrar stock de productos"<< endl;
    cout << "3. Buscar producto"<< endl;
    cout << "4. Modificar datos de un producto"<< endl;
    cout << "5. Reabastecimiento de un producto"<< endl;
    cout << "6. Incorporar nuevos productos"<< endl;
    cout << "7. Salir"<< endl;
    cout << "Ingrese una opcion:";cin >> opc;
    }
    while(opc<1 or opc>7);
    return opc;
}

int submenu2()
{
    int opc;
    do{
    cout << "1. Registrar una compra"<< endl;
    cout << "2. Historial de ventas"<< endl;
    cout << "3. Salir"<< endl;
    cout << "Ingrese una opcion:";cin >> opc;
    }
    while(opc<1 or opc>3);
    return opc;
}

struct productos
{
    string nombre;
    float precio;
    int stock;
};
struct tarjetasdecredito
{
    string nombre;
    int cantidad;
};
struct clientes
{
    int numero;
    string nombre;
    string apellido;
    string opinion;
    productos *comprados;
    tarjetasdecredito *tarjeta;
};



void crearinventario()
{

}

void mostrarstock()
{

}

void buscarproducto()
{

}

void modificardatos()
{

}

void reabastecimiento()
{

}

void nuevosproductos()
{

}

void registrocompras()
{

}

void historialventas()
{

}

void datosempresa()
{

}


int main ()
{
    int op;
}
