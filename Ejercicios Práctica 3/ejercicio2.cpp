#include <iostream> 
#include <cmath>
using namespace std;

int main ()
{
    float radio, pi = 3.1416, area, perimetro;

    cout << endl;
    cout << "CALCULO DEL AREA Y PERIMETRO DE UN CIRCULO" << endl << endl;

    cout << "Para realizar los calculos necesito saber el valor del radio del circulo." <<endl <<endl;

    cout << "Cual es el radio del circulo?" << endl;
    cin >> radio;

    //Calculos

    area = pi*pow(radio,2);

    perimetro = 2*pi*radio;

    cout << endl << "El area del circulo es: " << area << endl <<endl;
    
    cout << "El perimetro del circulo es: " << perimetro << endl <<endl;

    return 0;
}
