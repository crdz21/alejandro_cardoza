#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;

    for (int i = 0; i < 5; i++) {
        cout << "nombre: ";
        getline(cin, nombre);

        cout << nombre << endl;

        cout << nombre.length() << endl << endl;
    }

    return 0;
}