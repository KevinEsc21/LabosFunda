#include <iostream>
using namespace std;

int main ()
{
    int n1, n2, n3;
    float resultado;

    
    cout << endl;
    cout << "PROGRAMA QUE DA PROMEDIO DE TRES NUMEROS" << endl << endl;

    cout << "Necesito los siguientes datos: " <<endl <<endl;

    cout << "Cual es el primer numero entero?" <<endl;
    cin >> n1;

    cout << "Cual es el segundo numero entero?" <<endl; 
    cin >> n2;

    cout << "Cual es el tercero numero entero?" <<endl; 
    cin >> n3;

    resultado = ((float) n1+n2+n3)/(3);

    cout <<endl <<"El promedio de los tres numeros enteros es: " << resultado <<endl <<endl;
    
    return 0;
}