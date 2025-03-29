#include <iostream>
#include <fstream>
    using namespace std;

    void copiarArchivo(string origen, string destino);
    void crearTablaMultiplicar8(string rutaDestino);


    string rutaOrigen = "C:/Users/julio/OneDrive/Documentos/Ejercicios c++/origen.txt";
    string rutaDestino = "C:/Users/julio/OneDrive/Documentos/Ejercicios c++/destino.txt";
    string rutaEscritorio = "C:/Users/julio/OneDrive/Desktop/tabla_8.txt";

    int main() {
        copiarArchivo(rutaOrigen, rutaDestino);
        crearTablaMultiplicar8(rutaEscritorio);
        return 0;
    }

    void copiarArchivo(string origen, string destino) {
        ifstream archivoLectura(origen);
        ofstream archivoEscritura(destino);

        string linea;

        if (archivoLectura.is_open() && archivoEscritura.is_open()) {
            while (getline(archivoLectura, linea)) {
                archivoEscritura << linea << endl;
            }
            archivoLectura.close();
            archivoEscritura.close();
            cout << "Archivo copiado exitosamente.\n";
        } else {
            cout << "Error al abrir los archivos.\n";
        }
    }
    void crearTablaMultiplicar8(string rutaDestino) {
        ofstream archivo(rutaDestino);
        if (archivo.is_open()) {
            archivo << "Tabla del 8\n";
            for (int i = 1; i <= 10; i++) {
                archivo << "8 x " << i << " = " << 8 * i << endl;
            }
            archivo.close();
            cout << "Archivo con la tabla del 8 creado correctamente.\n";
        } else {
            cout << "No se pudo crear el archivo.\n";
        }
    }
