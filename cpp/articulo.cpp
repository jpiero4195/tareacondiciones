#include <iostream>
using namespace std;
int main() {
    double val;
    cout << "Ingrese el valor del articulo: ";
    cin >> val;
    if (val < 1500) {
        cout << "Debes pagar en efectivo";
    } else {
        cout << "Debes pagar con tarjeta";
    }
    cout <<endl<< "finalizar";

    return 0;
}