#include <iostream>
#include <string>
#include <algorithm>

bool esPalindromo(const std::string& cadena) {
    std::string reversa = cadena;
    std::reverse(reversa.begin(), reversa.end());
    return cadena == reversa;
}

int main() {
    std::string cadena;
    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, cadena);

    if (esPalindromo(cadena)) {
        std::cout << "La cadena ingresada es un palindromo." << std::endl;
    } else {
        std::cout << "La cadena ingresada no es un palindromo." << std::endl;
    }

    return 0;
}
