#include <iostream>
#include <string>
using namespace std;

int main (){

    int n, m;
    string respuesta;

    cout << endl << "PROGRAMA QUE VERIFICA SI UN NUMERO ES DIVISIBLE ENTRE OTRO"<< endl <<endl;

    cout << "Ingrese un numero: ";
    cin >> n;
    cout << endl << "Por que numero quiere verificar que " << n << " es divisible? ";
    cin >> m;

    respuesta = n % m == 0 ? "si es divisible" : "no es divisible";

    cout << endl << n << " " << respuesta << " entre " << m;

    return 0;
}