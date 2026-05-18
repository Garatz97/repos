#include <iostream> // Biblioteca para el uso de std::cout (salida por pantalla)
#include <vector>   // Biblioteca estándar para poder utilizar std::vector

// Definición de la estructura personalizada solicitada en el enunciado
// Agrupa un entero básico y un array contiguo de enteros en memoria
struct EstructuraHPC {
    int identificador;      // Variable de tipo entero básico (ocupa 4 bytes)
    int listaValores[5];    // Array contiguo en memoria compuesto por 5 enteros
};

int main() {
    // 1. Impresión de los tamaños en bytes de los tipos de variables básicas
    // Se utiliza sizeof() y se respeta estrictamente el formato "tipo_de_variable, tamaño [bytes]"
    std::cout << "bool, " << sizeof(bool) << " [bytes]" << std::endl;
    std::cout << "char, " << sizeof(char) << " [bytes]" << std::endl;
    std::cout << "int, " << sizeof(int) << " [bytes]" << std::endl;
    std::cout << "float, " << sizeof(float) << " [bytes]" << std::endl;
    std::cout << "double, " << sizeof(double) << " [bytes]" << std::endl;

    // 2. Creación de una variable del tipo de la estructura e impresión de su tamaño
    EstructuraHPC miEstructuraObjeto;
    std::cout << "EstructuraHPC, " << sizeof(miEstructuraObjeto) << " [bytes]" << std::endl;

    // 3. Declaración de una variable de tipo std::vector<float> e impresión de su tamaño
    std::vector<float> miVectorDinamico;
    std::cout << "std::vector<float>, " << sizeof(miVectorDinamico) << " [bytes]" << std::endl;

    // Retorno de un entero indicando que el programa finalizó correctamente
    return 0; 
}