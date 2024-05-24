#include <iostream>
using namespace std;
int main() {
    double ht, th;
    cout << "Ingrese las horas trabajadas: ";
    cin >> ht;

    cout << "Ingrese la tarifa por hora: ";
    cin >> th;

    double sa;
    if (ht <= 40) {
        sa = ht * th;
    } else {
        double hn = 40;
        double he = ht - 40;
        sa = (hn * th) + (he * th * 1.5);
    }
    cout << "El salario del trabajador es: " << sa;
    cout <<endl<< "finalizar";

    return 0;
}
