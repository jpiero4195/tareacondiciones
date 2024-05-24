#include <iostream>
using namespace std;
int main() {
    char rpt; 
    cout << "Si es culpable o no:";
    cin >> rpt;
    if(rpt == 'si')
        cout << "Debes pedir perdón";
    else
        cout << "Puedes retirarte";

    cout <<endl<< "finalizar";
    
    return 0;
}