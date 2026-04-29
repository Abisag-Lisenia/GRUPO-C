#include <iostream>
#include <fstream> // Librería necesaria para el manejo de archivos
#include <string>

using namespace std;

int main() {
    // 1. Definir las variables
    string nombre = "Juan Perez";
    int edad = 25;
    string ciudad = "Madrid";

    // 2. Crear el flujo para el archivo (ofstream = output file stream)
    ofstream archivo("datos.txt");

    // 3. Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir los datos en el archivo
        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Ciudad: " << ciudad << endl;

        // 4. Cerrar el archivo para asegurar que los datos se guarden
        archivo.close();

        cout << "Archivo 'datos.txt' creado y guardado con éxito." << endl;
    }
    else {
        cout << "Error: No se pudo crear el archivo." << endl;
    }

    return 0;
}
