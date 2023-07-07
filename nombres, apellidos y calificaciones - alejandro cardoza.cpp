#include <iostream>
#include <vector>

const int MAX_ESTUDIANTES = 100;
const int MAX_NOTAS = 5;

struct Estudiante {
    char nombre[50];
    double notas[MAX_NOTAS];
};

void ingresarEstudiante(Estudiante* estudiantes, int& totalEstudiantes) {
    if (totalEstudiantes >= MAX_ESTUDIANTES) {
        std::cout << "No se pueden agregar más estudiantes." << std::endl;
        return;
    }

    Estudiante estudiante;
    std::cout << "Ingrese el nombre y apellido del estudiante: ";
    std::cin.ignore();
    std::cin.getline(estudiante.nombre, sizeof(estudiante.nombre));

    estudiantes[totalEstudiantes] = estudiante;
    totalEstudiantes++;
}

void ingresarNotas(Estudiante* estudiantes, int totalEstudiantes) {
    std::cout << "Ingrese el índice del estudiante: ";
    int indice;
    std::cin >> indice;

    if (indice >= 0 && indice < totalEstudiantes) {
        Estudiante& estudiante = estudiantes[indice];
        std::cout << "Ingrese las notas de los cursos (separadas por espacios): ";
        for (int i = 0; i < MAX_NOTAS; i++) {
            std::cin >> estudiante.notas[i];
        }
    } else {
        std::cout << "Índice inválido." << std::endl;
    }
}

void visualizarNotasIndividuales(const Estudiante* estudiantes, int totalEstudiantes) {
    std::cout << "Ingrese el índice del estudiante: ";
    int indice;
    std::cin >> indice;

    if (indice >= 0 && indice < totalEstudiantes) {
        const Estudiante& estudiante = estudiantes[indice];
        std::cout << "Notas de " << estudiante.nombre << ":" << std::endl;
        for (int i = 0; i < MAX_NOTAS; i++) {
            std::cout << estudiante.notas[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Índice inválido." << std::endl;
    }
}

void calcularPromedioGeneral(const Estudiante* estudiantes, int totalEstudiantes) {
    if (totalEstudiantes == 0) {
        std::cout << "No hay estudiantes registrados." << std::endl;
        return;
    }

    double sumaTotal = 0.0;
    int totalNotas = totalEstudiantes * MAX_NOTAS;

    for (int i = 0; i < totalEstudiantes; i++) {
        const Estudiante& estudiante = estudiantes[i];
        for (int j = 0; j < MAX_NOTAS; j++) {
            sumaTotal += estudiante.notas[j];
        }
    }

    double promedioGeneral = sumaTotal / totalNotas;
    std::cout << "Promedio general de las notas: " << promedioGeneral << std::endl;
}

void mostrarMenu() {
    std::cout << "---- Menú ----" << std::endl;
    std::cout << "1. Ingresar estudiante" << std::endl;
    std::cout << "2. Ingresar notas" << std::endl;
    std::cout << "3. Visualizar notas individuales" << std::endl;
    std::cout << "4. Calcular promedio general" << std::endl;
    std::cout << "5. Salir" << std::endl;
    std::cout << "Ingrese una opción: ";
}

int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int totalEstudiantes = 0;

    int opcion;
    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarEstudiante(estudiantes, totalEstudiantes);
                break;
            case 2:
                ingresarNotas(estudiantes, totalEstudiantes);
                break;
            case 3:
                visualizarNotasIndividuales(estudiantes, totalEstudiantes);
                break;
            case 4:
                calcularPromedioGeneral(estudiantes, totalEstudiantes);
                break;
            case 5:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción inválida." << std::endl;
        }
    } while (opcion != 5);

    return 0;
}