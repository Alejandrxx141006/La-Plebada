#include <iostream>
using namespace std;

// Clase base (interfaz de figura)
class Figura {
public:
    virtual float calcularArea() = 0;
    virtual string obtenerNombre() = 0;
    virtual ~Figura() {}
};

// Clase Cuadrado
class Cuadrado : public Figura {
private:
    float lado;

public:
    Cuadrado(float l) : lado(l) {}

    float calcularArea() override {
        return lado * lado;
    }

    string obtenerNombre() override {
        return "Cuadrado";
    }
};

// Clase Círculo
class Circulo : public Figura {
private:
    float radio;

public:
    Circulo(float r) : radio(r) {}

    float calcularArea() override {
        return 3.1416f * radio * radio;
    }

    string obtenerNombre() override {
        return "Círculo";
    }
};

// Clase impresora de figuras
class FigPrinter {
public:
    void imprimir(Figura* figura) {
        cout << "🔷 Figura: " << figura->obtenerNombre() << endl;
        cout << "📐 Área: " << figura->calcularArea() << " unidades²\n" << endl;
    }
};

// Función principal
int main() {
    Cuadrado cuadrado(4.0);
    Circulo circulo(3.5);

    FigPrinter printer;
    printer.imprimir(&cuadrado);
    printer.imprimir(&circulo);

    return 0;
}
