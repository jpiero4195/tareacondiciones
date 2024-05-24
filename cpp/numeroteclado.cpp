#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    double menor;
    if (num1 < num2) {
        menor = num1;
    } else {
        menor = num2;
    }
    cout << "El menor numero es: " << menor;
    cout <<endl<< "finalizar";

    return 0;
}