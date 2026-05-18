

#include <iostream> // Biblioteca para el uso de std::cout
#include <vector>   // Biblioteca para utilizar std::vector

// Definición de la estructura personalizada solicitada del enunciado
// Agrupa un entero básico y un array contiguo de enteros en memoria
struct EstructuraHPC {
    int identificador;      // Variable de tipo entero básico.
    int listaValores[5];    // Array compuesto por 5 enteros para contar los bytes.
};

int main() {
    //Impresión de los tamaños en bytes de los tipos de variables básicas
    // Se utiliza sizeof() y se respeta estrictamente el formato "tipo_de_variable, tamaño [bytes]"
    std::cout << "bool, " << sizeof(bool) << " [bytes]" << std::endl;
    std::cout << "char, " << sizeof(char) << " [bytes]" << std::endl;
    std::cout << "int, " << sizeof(int) << " [bytes]" << std::endl;
    std::cout << "float, " << sizeof(float) << " [bytes]" << std::endl;
    std::cout << "double, " << sizeof(double) << " [bytes]" << std::endl;

    // Creación de una variable del tipo de la estructura e impresión de su tamaño
    EstructuraHPC miEstructuraObjeto;
    std::cout << "EstructuraHPC, " << sizeof(miEstructuraObjeto) << " [bytes]" << std::endl;

    // Declaración de una variable de tipo std::vector<float> e impresión de su tamaño
    std::vector<float> miVectorDinamico;
    std::cout << "std::vector<float>, " << sizeof(miVectorDinamico) << " [bytes]" << std::endl;

    // Retorno de un entero indicando que el programa finalizó correctamente
    return 0; 
}