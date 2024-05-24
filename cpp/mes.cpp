#include <iostream>
using namespace std;
int main() {
    int mes, an;
    cout << "Ingrese el número de mes (1 al 12): ";
    cin >> mes;

    cout << "Ingrese el año: ";
    cin >> an;
    int dia;
    if(mes == 1){
        dia = 31;
    }else{
        if(mes == 2){
            if ((an % 4 == 0 && an % 100 != 0) || (an % 400 == 0)) {
                dia = 29;
            } else {
                dia = 28;
            }
        }else{
            if(mes == 3){
                dia = 31;
            }else{
                if(mes == 4){
                    dia = 30;
                }else{
                    if(mes == 5){
                        dia = 31;
                    }else{
                        if(mes == 6){
                            dia = 30;
                        }else{
                            if(mes == 7){
                                dia = 31;
                            }else{
                                if(mes == 8){
                                    dia = 31;
                                }else{
                                    if(mes == 9){
                                        dia = 30;
                                    }else{
                                        if(mes == 10){
                                            dia = 31;
                                        }else{
                                            if(mes == 11){
                                                dia = 30;
                                            }else{
                                                if(mes == 12){
                                                    dia = 31;
                                                }else{
                                                    cout << "Numero de mes invalido.";
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "El mes " << mes << " del año " << an << " tiene " << dia << " dias.";
    cout <<endl<< "finalizar";
    return 0;
}
