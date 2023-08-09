#include <iostream>
#include <string>
#include <algorithm>

bool esPalindromo(const std::string& texto) {
    std::string textoSinEspacios = texto;
    
    std::string textoReverso = textoSinEspacios;
    std::reverse(textoReverso.begin(), textoReverso.end());
    
    return textoSinEspacios == textoReverso;
}

int main() {
    std::string texto;
    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, texto);
    
    if (esPalindromo(texto)) {
        std::cout << "Es un palindromo." << std::endl;
    } else {
        std::cout << "No es un palindromo." << std::endl;
    }
    
    return 0;
}

