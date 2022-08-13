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

struct tarjetasdecredito
{
    string nombre;
    int cantidad;
}

struct clientes
{
    int numero;
    string nombre;
    string apellido;
    string opinion;
    productos *comprados;
    tarjetasdecredito *tarjeta;
};
struct productos
{

};



int main ()
{

}
