#include <iostream>
using namespace std;
int main() {
    double lado1, lado2, lado3;
    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lado1;

    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> lado2;

    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triangulo es equilatero.";
    } else {
        if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "El triangulo es isosceles.";
        } else {
            cout << "El triangulo es escaleno.";
        }
    }
    cout <<endl<< "finalizar";

    return 0;
}
