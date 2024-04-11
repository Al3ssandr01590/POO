#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string ocupacion;

public:
    // Constructor
    Persona(string _nombre, int _edad, string _ocupacion) {
        nombre = _nombre;
        edad = _edad;
        ocupacion = _ocupacion;
    }

    // Métodos para establecer los valores de los atributos
    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    void setEdad(int _edad) {
        edad = _edad;
    }

    void setOcupacion(string _ocupacion) {
        ocupacion = _ocupacion;
    }

    // Métodos para obtener los valores de los atributos
    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    string getOcupacion() {
        return ocupacion;
    }

    // Método para mostrar la información de la persona
    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Ocupacion: " << ocupacion << endl;
    }
};

int main() {
    // Crear objetos de la clase Persona
    Persona persona1("Juan", 30, "Ingeniero");
    Persona persona2("Maria", 25, "Doctora");

    // Mostrar información de las personas
    cout << "Informacion de la persona 1:" << endl;
    persona1.mostrarInformacion();

    cout << "\nInformacion de la persona 2:" << endl;
    persona2.mostrarInformacion();

    // Modificar información de una persona
    persona1.setEdad(35);
    persona1.setOcupacion("Programador");

    cout << "\nInformacion de la persona 1 despues de la modificacion:" << endl;
    persona1.mostrarInformacion();

    return 0;
}
