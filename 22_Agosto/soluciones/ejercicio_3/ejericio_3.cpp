
#include <iostream>  
using namespace std; 

int sumaArreglo(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}
int main() {

     int n;
    cout << "¿Cuántos números desea ingresar? ";
    cin >> n;

    int numeros[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    int total = sumaArreglo(numeros, n);
    cout << "La suma de los números es: " << total << endl;


    return 0;
}
