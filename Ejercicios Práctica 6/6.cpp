#include <iostream> 
using namespace std;

int main (){

    int size, n;
    
    cout << endl << "CONTADOR DE NUMEROS EN UN ARREGLO" << endl << endl;

    cout << "Ingrese el tamano del arreglo: "; cin >> size;
    while (size<1){
        cout << endl << "Ingresa un tamano mayor o igual que 1: "; cin >> size;
    }

    cout << "----------------------------------------------------------------------------";

    int array[size]; 

    for (int i = 0; i <size; i++){
        cout << endl << "Ingrese el dato numero " << i+1 << ": ";
        cin >> array[i];
    }

    cout << endl << "Ingrese el numero que quiere contar cuantas veces aparece en el arreglo: ";
    cin >> n;

    int suma=0;
    for (int i = 0; i<size; i++){
        if (array[i] == n){
            suma+=1;
        }
    }

    cout << "----------------------------------------------------------------------------";

    cout << endl << "El numero " << n << " aparece " << suma;
    string mostrar = (suma==1) ? " vez en el arreglo." : " veces en el arreglo.";
    cout << mostrar << endl << endl;

    return 0;
}

