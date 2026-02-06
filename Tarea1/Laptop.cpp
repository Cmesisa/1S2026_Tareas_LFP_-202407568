#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    //Atributos
    string marca;
    int ram;
    int bateria;

public:
    //Constructor: Inicializa los atributos
    Laptop(string _marca, int _ram,int _bateriaInicial) {
        marca = _marca;
        ram = _ram;
        bateria = _bateriaInicial;
        cout<<"Laptop "<<marca<<" creada exitosamente."<<endl;
    }

    void ejecutarPrograma(string nombrePrograma) {
        if (bateria >= 20) {
            bateria -= 20;
            cout << "Ejecutando "<<nombrePrograma<<"... Memoria RAM de "<<ram<<"GB optimizada."<<endl;
        }else {
            cout<<"Bateria insuficiente para abrir "<< nombrePrograma<<". ¡Conecta el cargador!"<<endl;
        }
    }

    void cargar() {
        bateria = 100;
        cout<< "["<< marca << "] Bateria cargada al 100%."<<endl;
    }

    void mostrarEstado() {
        cout << "--- Estado actual ---" << endl;
        cout << "Marca: " << marca << "\nBateria: " << bateria << "%" << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    Laptop laptopPro("MacBook  Pro",32,100);

    Laptop laptopEstudiante("HP Pavilion",8,15);

    laptopPro.mostrarEstado();
    laptopEstudiante.mostrarEstado();

    laptopPro.ejecutarPrograma("Visual Studio Code");
    laptopPro.mostrarEstado();

    laptopEstudiante.ejecutarPrograma("Calculadora");
    laptopEstudiante.cargar();
    laptopEstudiante.ejecutarPrograma("Visual Studio Code");
    laptopEstudiante.mostrarEstado();

    return 0;
}