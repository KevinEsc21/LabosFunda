#include <iostream>
using namespace std;

int main (){

    int n; 

    cout << endl << "PROGRAMA QUE VERIFICA SI UN NUMERO ES POSITIVO, NEGATIVO O CERO"<< endl <<endl;

    cout << "Inserte el numero a verificar: ";
    cin >> n;
    cout << endl;

    if (n > 0){
        cout << n << " es positivo";
    }else if (n < 0) {
        cout << n << " es negativo"; 
    }else {
        cout << "El numero es cero";
    }

    return 0;
}