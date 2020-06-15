#include <iostream> 
using namespace std;
int MCD(int, int);

int main (){
    int nmayor, nmenor;

    cout << endl << "PROGRAMA QUE CALCULA EL MCD DE DOS NUMEROS" << endl << endl;
    cout << "Ingrese el primer numero: ";
    cin >> nmayor;
    cout << endl <<"Ingrese el segundo numero: ";
    cin >> nmenor;
    
    if (nmayor < nmenor){
        cout << endl << "El MCD es: " << MCD(nmenor, nmayor) << endl << endl;
    }else if (nmayor >= nmenor){
        cout << endl << "El MCD es: " << MCD(nmayor, nmenor) << endl << endl;
    }
    

    return 0;
}
int MCD (int mayor, int menor){
    int residuo;

    do {
        residuo = mayor % menor;
        if(residuo != 0){
        mayor = menor;
        menor = residuo; 
        }
    } while(residuo != 0);

    return menor;
}