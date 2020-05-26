#include <iostream>
#include <string>
using namespace std;

int main (){

    string palabra;
    int longitud;
    
    cout << endl << "PROGRAMA QUE VERIFICA SI LA PALABRA INGRESADA INICIA Y FINALIZA CON LA MISMA LETRA"<< endl <<endl;

    cout << "Ingrese la palabra: ";
    cin >> palabra;
    cout << endl;

    longitud = palabra.length();

    if (palabra[0]== palabra[longitud-1]) {
        cout << "La palabra inicia y finaliza con la misma letra";
    } else { 
        cout << "La palabra no inicia y no finaliza con la misma letra";
    }
    cout << endl <<endl;

    return 0;
}