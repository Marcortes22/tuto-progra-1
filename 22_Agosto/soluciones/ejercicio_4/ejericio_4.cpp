
#include <iostream>  
using namespace std; 

int maximo(int a, int b, int c) {
    int mayor = a;

    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }

    return mayor;
}
int main() {
     int num1, num2, num3;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    int mayor = maximo(num1, num2, num3);
    cout << "El número mayor es: " << mayor << endl;
    return 0;
}
