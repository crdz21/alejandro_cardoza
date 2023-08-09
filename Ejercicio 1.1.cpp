#include <iostream>

void invertirFrase(char* frase) {
    int longitud = 0;
    while (frase[longitud] != '\0') {
        longitud++;
    }

    int inicio = 0;
    int fin = longitud - 1;
    while (inicio < fin) {
        char temp = frase[inicio];
        frase[inicio] = frase[fin];
        frase[fin] = temp;
        inicio++;
        fin--;
    }
}

int main() {
    const int MAX_LONGITUD = 100;
    char frase[MAX_LONGITUD];

    std::cout << "Ingrese una frase: ";
    std::cin.getline(frase, MAX_LONGITUD);

    invertirFrase(frase);

    std::cout << "Frase invertida: " << frase << std::endl;

    return 0;
}
