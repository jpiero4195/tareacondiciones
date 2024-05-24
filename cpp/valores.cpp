#include <iostream>
using namespace std;
int main() {

    double num1, num2, num3;

    cout << "Ingrese el primer valor: ";
    cin >> num1;

    cout << "Ingrese el segundo valor: ";
    cin >> num2;

    cout << "Ingrese el tercer valor: ";
    cin >> num3;

    double mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    cout << "El mayor valor es: " << mayor;
    cout <<endl<< "finalizar";

    return 0;
}
