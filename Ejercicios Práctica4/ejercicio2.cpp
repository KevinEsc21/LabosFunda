#include <iostream>
#include <string>
using namespace std;

int main (){

    int n; 
    string r;

    cout << endl << "PROGRAMA QUE VERIFICA SI UN NUMERO ES PAR O IMPAR "<< endl <<endl;

    cout << "Ingrese el numero a verificar: ";
    cin >> n;

    r = n % 2 == 0 ? " es par" : " es impar";

    cout << endl << "El numero "<< n << r;
    
    cout << endl << endl;

    return 0;
}