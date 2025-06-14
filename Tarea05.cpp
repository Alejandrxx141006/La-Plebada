#include <iostream>
using namespace std;

// Definimos la interfaz (clase abstracta)
class Figura {
public:
    // Método puramente virtual (la "interfaz")
    virtual float calcularArea() = 0;
    virtual void mostrar() = 0;
};

// Implementación: Clase Cuadrado
class Cuadrado : public Figura {
private:
    float lado;

public:
    Cuadrado(float l) {
        lado = l;
    }

    float calcularArea() override {
        return lado * lado;
    }

    void mostrar() override {
        cout << "Cuadrado - Lado: " << lado << " - Área: " << calcularArea() << endl;
    }
};

// Implementación: Clase Círculo
class Circulo : public Figura {
private:
    float radio;

public:
    Circulo(float r) {
        radio = r;
    }

    float calcularArea() override {
        return 3.1416f * radio * radio;
    }

    void mostrar() override {
        cout << "Círculo - Radio: " << radio << " - Área: " << calcularArea() << endl;
    }
};

// Función principal
int main() {
    // Usamos la interfaz a través de punteros
    Figura* f1 = new Cuadrado(4.0);
    Figura* f2 = new Circulo(3.5);

    f1->mostrar();
    f2->mostrar();

    delete f1;
    delete f2;

    return 0;
}
