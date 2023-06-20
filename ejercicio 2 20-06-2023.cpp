#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int contarVocales(const char* frase) {
    int contador = 0;
    int longitud = strlen(frase);

    for (int i = 0; i < longitud; ++i) {
        char caracter = tolower(frase[i]);

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            ++contador;
        }
    }

    return contador;
}

int main() {
    char frase[36];
    cout << "Ingrese una frase de hasta 35 caracteres: ";
    cin.getline(frase, 36);

    int cantidadVocales = contarVocales(frase);

    cout << "La cantidad de vocales utilizadas es: " << cantidadVocales << std::endl;

    getch(); 

    return 0;
}
