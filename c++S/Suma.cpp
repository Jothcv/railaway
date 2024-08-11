#include <iostream>
using namespace std;

int main() {
    int num1, num2, resu;
    cout << "Ingresa un numero para sumar:\n";
    cin >> num1;
    cout << "Listo, ahora pon otro numero para sumarlo con el anterior:\n";
    cin >> num2;
    resu = num1 + num2;
    cout << "La suma es: " << resu << endl;
    return 0;
}
