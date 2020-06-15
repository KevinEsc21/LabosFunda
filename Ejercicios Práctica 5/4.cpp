#include <iostream>
using namespace std;
bool abisiesto(int);
void mostrarfecha(int, int, int);
int main (){

    int day, month, year;

    cout << endl << "CALCULAR EL DIA SIGUIENTE DE UNA FECHA";
    cout << endl << endl  << "Ingrese el ano (aa): ";
    cin >> year;
    
    if (year < 0){

        cout << endl << "No existen los anos negativos" << endl << endl;

    } else {
        
        cout  << endl  << "Ingrese el mes (mm): ";
    cin >> month;
    
    switch (month){
        case 1:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 31 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 31){
                month += 1;
                day = 1;
            }
            mostrarfecha(day, month, year);
            }
            
            break;
        case 2:
            if (abisiesto(year) == true){
                cout << endl << "Ingrese el dia (dd): ";
                cin >> day; 
                if (day > 29 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
                }else {
                day+=1;
                if (day>29){
                    month+=1;
                    day =1;
                 }
                mostrarfecha(day, month, year);
                }
            }else {
                cout << endl << "Ingrese el dia (dd): ";
                cin >> day; 
                if (day > 28 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
                }else {
                day+=1;
                if (day>28){
                    month+=1;
                    day =1;
                    }
                    mostrarfecha(day, month, year);
                 }
            }
            break;
        case 3:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 31 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 31){
                month += 1;
                day = 1;
              }
            mostrarfecha(day, month, year); 
            }
            break;
        case 4:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 30 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 30){
                month += 1;
                day = 1;
             }
            mostrarfecha(day, month, year);
            }
             break;
        case 5:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 31 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 31){
                month += 1;
                day = 1;
             }
            mostrarfecha(day, month, year);
            }
             break;
        case 6:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 30 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 30){
                month += 1;
                day = 1;
             }
            mostrarfecha(day, month, year);
            }
             break;
        case 7:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 31 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 31){
                month += 1;
                day = 1;
             }
            mostrarfecha(day, month, year);
            }
             break;
        case 8:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 31 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 31){
                month += 1;
                day = 1;
             }
            mostrarfecha(day, month, year);
            }
             break;
        case 9:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 30 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 30){
                month += 1;
                day = 1;
             }
            mostrarfecha(day, month, year);
            }
             break;
        case 10:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 31 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 31){
                month += 1;
                day = 1;
             }
            mostrarfecha(day, month, year);
            }
             break;
        case 11:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 30 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 30){
                month += 1;
                day = 1;
            }
            mostrarfecha(day, month, year);
            }
             break;
        case 12:
            cout << endl << "Ingrese el dia (dd): ";
            cin >> day; 
            if (day > 31 || day < 1){
                cout << endl << "Ha introducido una fecha invalida" << endl << endl;
            }else {
            day += 1;
            if (day > 31){
                month =1;
                day = 1;
                year++;
             }
            mostrarfecha(day, month, year);
            }
             break;
        default: 
            cout << endl << "Un ano solo tiene 12 meses, no mas, ni meses negativos." << endl << endl;
    }
        
    }
    
    return 0;
}

//Declaración de funciones
bool abisiesto(int a){
bool bisiesto;

    if (a % 400 == 0){
        bisiesto = true;
    } else if (a % 4 == 0 && a % 100 != 0){
        bisiesto = true;
    }else {
        bisiesto = false;
    }
    
    return bisiesto;
}

void mostrarfecha(int a, int b, int c){     
    cout << endl << "La fecha (dd/mm/aa) es: " << endl << endl;
    if (a<10) cout << 0;
    cout << a << "/";
    if (b<10) cout << 0;
    cout << b << "/";
    if (c<10) cout << 0;
    cout << c;
    cout << endl << endl; 
}