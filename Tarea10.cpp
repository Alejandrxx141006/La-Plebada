#include <iostream>
using namespace std;

int main() {
    cout << "=== Ejemplos básicos de punteros en C++ ===\n" << endl;

    // 1. Puntero a entero
    int numero = 42;
    int* punteroNumero = &numero;
    cout << "[1] Valor de 'numero': " << numero << endl;
    cout << "[1] Dirección de 'numero': " << &numero << endl;
    cout << "[1] Contenido del puntero: " << punteroNumero << endl;
    cout << "[1] Valor accedido con puntero: " << *punteroNumero << "\n" << endl;

    // 2. Puntero y modificación de valor
    *punteroNumero = 100;
    cout << "[2] Nuevo valor de 'numero' después de modificar con puntero: " << numero << "\n" << endl;

    // 3. Puntero a float
    float decimal = 3.14f;
    float* ptrDecimal = &decimal;
    cout << "[3] Valor float: " << *ptrDecimal << endl;
    cout << "[3] Dirección del float: " << ptrDecimal << "\n" << endl;

    // 4. Puntero a cadena (char array)
    const char* texto = "Hola punteros";
    cout << "[4] Texto: " << texto << endl;
    cout << "[4] Dirección del texto: " << (void*)texto << "\n" << endl;

    // 5. Puntero nulo
    int* punteroNulo = nullptr;
    cout << "[5] Puntero nulo: " << punteroNulo << "\n" << endl;

    // 6. Arreglo y puntero
    int arreglo[] = {10, 20, 30};
    int* ptrArreglo = arreglo;
    cout << "[6] Accediendo a arreglo con puntero:\n";
    for (int i = 0; i < 3; i++) {
        cout << "  Elemento " << i << ": " << *(ptrArreglo + i) << endl;
    }

    return 0;
}
