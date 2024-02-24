#include <iostream>
using namespace std;

int main() {

#include <iostream>

    int numeroprimo;
    cout << "Ingrese el numero que desea saber si es primo o no: ";
    cin >> numeroprimo;

    if (numeroprimo <= 1) {
        cout << "El numero no es primo" << endl;
    } else if (numeroprimo == 2) {
        cout<< "El numero es primo" << endl;
    } else if (numeroprimo % 2 == 0) {
        cout << "El numero no es primo" << endl;
    } else {
        for (int i = 3; i * i <= numeroprimo; i += 2) {
            if (numeroprimo % i == 0) {
                cout << "El numero no es primo" << endl;
                return 0;
            }
        }
        cout << "El numero es primo" << endl;
    }

    return 0;






}
