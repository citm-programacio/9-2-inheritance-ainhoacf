// inheritance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

// Clase base: Building
class Building {
protected:
    string name; // Miembro protegido

public:
    // Constructor
    Building(const string& name) : name(name) {}

    // Método público para obtener el nombre
    string getName() const {
        return name;
    }
};

// Clase derivada: Warehouse
class Warehouse : public Building {
private:
    int wood, rocks, wheat; // Miembros privados

public:
    // Constructor
    Warehouse(const string& name, int wood, int rocks, int wheat)
        : Building(name), wood(wood), rocks(rocks), wheat(wheat) {}

    // Método para imprimir los recursos
    void printResources() const {
        cout << "Warehouse: " << getName() << endl;
        cout << "Wood: " << wood << endl;
        cout << "Rocks: " << rocks << endl;
        cout << "Wheat: " << wheat << endl;
    }
};

// Clase derivada: House
class House : public Building {
private:
    int floors, inhabitants, servants; // Miembros privados

public:
    // Constructor
    House(const string& name, int floors, int inhabitants, int servants)
        : Building(name), floors(floors), inhabitants(inhabitants), servants(servants) {}

    // Método para imprimir los datos de la casa
    void printHouse() const {
        cout << "House: " << getName() << endl;
        cout << "Floors: " << floors << endl;
        cout << "Inhabitants: " << inhabitants << endl;
        cout << "Servants: " << servants << endl;
    }
};

// Clase derivada: Temple
class Temple : public Building {
private:
    string god; // Miembro privado
    int priests; // Miembro privado

public:
    // Constructor
    Temple(const string& name, const string& god, int priests)
        : Building(name), god(god), priests(priests) {}

    // Método para imprimir los datos del templo
    void printTemple() const {
        cout << "Temple: " << getName() << endl;
        cout << "God: " << god << endl;
        cout << "Priests: " << priests << endl;
    }
};

// Función principal
int main() {
    // Crear una instancia de cada clase
    Warehouse warehouse("Central Storage", 500, 300, 200);
    House house("Villa Aurelia", 3, 12, 4);
    Temple temple("Temple of Jupiter", "Jupiter", 5);

    // Llamar a los métodos print de cada clase
    warehouse.printResources();
    cout << endl;

    house.printHouse();
    cout << endl;

    temple.printTemple();

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
