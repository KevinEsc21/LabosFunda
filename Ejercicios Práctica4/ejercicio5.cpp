#include <iostream>
#include <string>
using namespace std;

int main (){

    string palabra, respuesta, respuesta2;
    int resultado;
    


    cout << endl << "PROGRAMA QUE VERIFICA SI LA PALABRA INGRESADA ES MAYOR A 10 CARACTERES"<< endl <<endl;

    cout << "Ingrese la palabra: ";
    cin >> palabra;
    cout << endl;

    resultado = palabra.length();

    respuesta2 = resultado % 2 == 0  ? " y su longitud es par" : " y su longitud es impar";
    if (resultado > 10){
        respuesta = "es mayor a 10 caracteres";
    } else if (resultado < 10) {
        respuesta = "es menor a 10 caracteres";
    } else {
        respuesta = "es igual a 10 caracteres";
    } 
    
    cout << "La palabra ingresada " << respuesta <<  respuesta2;
    return 0;
}