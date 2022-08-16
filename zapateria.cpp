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



int crearinventario(productos *producto)
{
    int l=1;
    char confirmar;
    do
    {
    producto=new productos[l];
    cout << "Quiere ingresar un nuevo producto?(S=si , N=no) [";cin>> confirmar;cout << "]"<<endl;
    if(confirmar=='S' or confirmar=='s')
    {
        cout << "Ingrese el nombre del producto:";cin>> (producto+(l-1))->nombre;cout << endl;
        cout << "Ingrese el precio del producto:";cin>> (producto+(l-1))->precio;cout << endl;
        cout << "Ingrese la cantidad del producto:";cin>> (producto+(l-1))->stock;cout << endl;
    }
    else if(confirmar!='N' or confirmar!='n')
    {
        cout << "Ingrese una opcion valida"<< endl;
    }
    l++;
    }while(confirmar!='N' or confirmar!='n');
    return l;
}

void mostrarstock(productos *producto, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << "El producto "<< (producto+i)->nombre<<" tiene un stock de "<< (producto+i)->stock<<endl;
    }
}

void buscarproducto(producto *producto, int size, string buscar)
{
    for(int i=0; i<size; i++)
    {
        if((producto+i)->nombre==buscar)
        {
            cout << "El producto "<< (producto+i)->nombre<< endl;
            cout << "Tiene un stock de: "<< (producto+i)->stock<< endl;
            cout << "Y su precio es de: "<< (producto+i)->precio<< endl;
        }
    }
}

int modificardatosmenu()
{
    int opc;
    do
    {
    cout << "1. Nombre"<< endl;
    cout << "2. Stock"<< endl;
    cout << "3. Precio"<< endl;
    cout << "4. Regresar"        
    }while(opc<1 or opc>4);
    return opc;
}

void modificardatos(productos *producto, int size,string buscar)
{
    char opc;
    for(int i=0; i<size; i++)
    {
        if((producto+i)->nombre==buscar)
        {
            cout << "Que desea cambiar del producto?";
            int opc;
            opc=modificardatosmenu();
            do{
            switch(opc)
            {
                case 1:
                cout << "Ingrese el nuevo nombre a cambiar";cin>>(producto+i->nombre);cout << endl;
                break;
                case 2:
                cout << "Ingrese el nuevo stock a cambiar";cin>>(producto+i->stock);cout << endl;
                break;
                case 3:
                cout << "Ingrese el nuevo precio a cambiar";cin>>(producto+i)->precio;cout << endl;
                break;
            }
            }while(opc!=4);
        }
    }
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
    clientes *clientes;
    productos *productos;
    
}
