#include <iostream>

using namespace std;
int main() {
    int matriz[4][4];

    // Ingresar los datos
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el elemento en la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        int suma = 0;
        for (int j = 0; j < 4; j++) {
            suma += matriz[i][j];
        }
        cout << "La suma de la fila " << i + 1 << " es: " << suma <<endl;
    }

    return 0;
}