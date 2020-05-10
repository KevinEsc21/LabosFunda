#include <iostream>
using namespace std;

int main ()
{
    string nombre;
    int cantidad;
    float precio;
    float total;
    
    cout << endl << "TOTAL DE DINERO GASTADO" <<endl << endl;

    cout << "Para calcular el total de dinero gastado ingrese los siguientes datos: " <<endl << endl;

    cout << "Nombre del producto: " <<endl;
    getline(cin, nombre);

    cout << endl << "Precio del producto: "<< endl << "$";
    cin >> precio;

    cout <<endl << "cantidad de productos a comprar: " <<endl;
    cin >> cantidad;

    //calculo dinero gastado

    total = precio*cantidad;

    cout << endl << "El total de dinero gastado es: $" <<total << endl <<endl;

    
    return 0;
}