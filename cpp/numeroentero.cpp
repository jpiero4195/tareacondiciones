#include <iostream>
using namespace std;
int main() {
    
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    int suma = num1 + num2 + num3;

    cout << "El menor numero es: " << menor;
    cout << "La suma de los numeros es: " << suma ;
    cout <<endl<< "finalizar";

    return 0;
}
