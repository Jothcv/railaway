#include <iostream>
using namespace std;

int main() {
    int num1, num2, resu;
    cout << "Ingresa un numero para multiplicar:\n";
    cin >> num1;
    cout << "Listo, ahora pon otro numero para multiplicarlo con el anterior:\n";
    cin >> num2;
    resu = num1 * num2;
    cout << "La multiplicacion es: " << resu << endl;
    return 0;
}
