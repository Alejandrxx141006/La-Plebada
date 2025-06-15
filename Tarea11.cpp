#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Repositorio usando vector para guardar áreas
class RepoVector {
private:
    vector<float> areas;  // Vector para guardar los valores

public:
    // Método para guardar un área
    void save(float area) {
        areas.push_back(area);
        cout << fixed << setprecision(2);
        cout << "[Guardado] Área: " << area << " unidades²" << endl;
    }

    // Método para mostrar todas las áreas guardadas
    void getArea() {
        if (areas.empty()) {
            cout << "[Aviso] No hay áreas guardadas.\n";
            return;
        }

        cout << "\n📋 Lista de Áreas Guardadas:\n";
        cout << "-----------------------------\n";
        for (size_t i = 0; i < areas.size(); i++) {
            cout << "Área #" << (i + 1) << ": " << areas[i] << " unidades²" << endl;
        }
        cout << "-----------------------------\n";
        cout << "Total: " << areas.size() << " áreas guardadas\n" << endl;
    }
};

// Función para calcular el área de un rectángulo
float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}

// Función principal
int main() {
    RepoVector repo;

    cout << "=== Sistema con RepoVector ===\n" << endl;

    // Calcular y guardar áreas
    repo.save(calcularAreaRectangulo(5.0, 2.0));
    repo.save(calcularAreaRectangulo(6.3, 3.5));
    repo.save(calcularAreaRectangulo(4.2, 1.8));

    // Mostrar todas las áreas
    repo.getArea();

    return 0;
}
