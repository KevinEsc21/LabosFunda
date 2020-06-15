#include <iostream>
using namespace std;

int main(){

    int h, m, s;

    cout << "CALCULAR LA HORA UN SEGUNDO DESPUES" << endl << endl;
    cout << "Se utiliza el formato de 24 horas, de esta forma HH:MM:SS"<< endl <<endl;
    cout << "Ingrese la hora: ";
    cin >> h;
    while (h>=24 || h<0){
        cout << endl << "ingrese un dato de hora correcto" << endl << endl;
        cout << "Ingrese la hora: ";
        cin >> h;
    }
    cout << endl << "Ingrese los minutos: ";
    cin >> m;
    while (m>=60 || m<0 ){
        cout << endl << "ingrese un dato de minutos correcto" << endl << endl;
        cout << "Ingrese la hora: ";
        cin >> m;
    }
    cout << endl << "Ingrese los segundos: ";
    cin >> s;
    while (s>=60 || s<0){
        cout << endl << "ingrese un dato de segundos correcto" << endl << endl;
        cout << "Ingrese la hora: ";
        cin >> s;
    }

    s += 1;
    if (s>=60){
        m += 1;
        s = 0;
        if (m >= 60){
            h +=1;
            m = 0;
            if (h >= 24){
                h = 0;
            }
        }
    }

    cout << endl;
    cout << "La hora es: " << endl << endl;
    if (h<10) cout << 0;
    cout << h << ":";
    if (m<10) cout << 0;
    cout << m << ":";
    if (s<10) cout << 0;
    cout << s;
    cout << endl << endl; 

    return 0;
}