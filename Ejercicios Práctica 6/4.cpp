#include <iostream> 
using namespace std;

void llenar(int[], int);
void sumar(int[], int[], int, int[]);
void desplegar(int [], int);


int main (){
    int n;

    cout << endl << "SUMAR LOS ELEMENTOS DE DOS ARREGLOS";

    cout << endl << endl << "Ingrese la longitud de los arreglos: ";
    cin >> n;
    while (n<1){
        cout << endl << "Ingresa una longitud mayor o igual que 1: "; cin >> n;
    }

    // llenar los arreglos
    int arreglo[n], arreglo2[n], suma[n];
    cout << "---------------------------";
    cout << endl << "Llenemos el arreglo 1 " << endl;
    llenar(arreglo,n);

    cout << "---------------------------";
    cout << endl << "Llenemos el arreglo 2 " << endl;
    llenar(arreglo2,n);

    // Sumar los valores de las posiciones iguales de los arrreglos
    sumar(arreglo,arreglo2,n,suma);

    // Mostrar el nuevo arreglo
    cout << "---------------------------";
    desplegar(suma, n);

    return 0;
}

// llenar los arreglos
void llenar(int vector[], int n ){ 

    for (int i=0; i<n ; i++){
        cout << endl << "Ingrese el dato numero " << i+1 << ": ";
        cin >> vector[i];
    }

}

// Sumar los valores de las posiciones iguales de los arrreglos
void sumar(int vector[], int vector2[], int n, int suma[]){
    
    for (int i=0; i<n; i++){
        suma[i]= vector[i] + vector2[i];
    }

}

// Mostrar el nuevo arreglo
void desplegar (int suma[], int n){

    cout << endl << "El nuevo arreglo sumando las posiciones iguales de los arreglos anteriores es: { ";

    for (int i=0 ; i<n ; i++){
        cout << suma[i] << " ";
    }
    cout << "}" << endl << endl;
}