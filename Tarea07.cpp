#include <iostream>
#include <cmath>
using namespace std;

// Interfaz de figura
class Figura {
public:
    virtual float calcularArea() = 0;
    virtual string obtenerNombre() = 0;
    virtual ~Figura() {}
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

// Clase Cuadro
class Cuadro : public Figura {
private:
    float lado;

public:
    Cuadro(float l) : lado(l) {}

    float calcularArea() override {
        return lado * lado;
    }

    string obtenerNombre() override {
        return "Cuadro";
    }
};

// Clase Triángulo
class Triangulo : public Figura {
private:
    float base;
    float altura;

public:
    Triangulo(float b, float h) : base(b), altura(h) {}

    float calcularArea() override {
        return (base * altura) / 2;
    }

    string obtenerNombre() override {
        return "Triángulo";
    }
};

// Clase Factory
class FiguraFactory {
public:
    static Figura* crearFigura(string tipo) {
        if (tipo == "circulo") {
            return new Circulo(3.0);
        } else if (tipo == "cuadro") {
            return new Cuadro(4.0);
        } else if (tipo == "triangulo") {
            return new Triangulo(5.0, 2.5);
        } else {
            return nullptr;
        }
    }
};

// Función principal
int main() {
    Figura* f1 = FiguraFactory::crearFigura("circulo");
    Figura* f2 = FiguraFactory::crearFigura("cuadro");
    Figura* f3 = FiguraFactory::crearFigura("triangulo");

    if (f1) {
        cout << f1->obtenerNombre() << " - Área: " << f1->calcularArea() << endl;
        delete f1;
    }

    if (f2) {
        cout << f2->obtenerNombre() << " - Área: " << f2->calcularArea() << endl;
        delete f2;
    }

    if (f3) {
        cout << f3->obtenerNombre() << " - Área: " << f3->calcularArea() << endl;
        delete f3;
    }

    return 0;
}
