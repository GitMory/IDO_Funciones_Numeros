#include <iostream>

using namespace std;

// Autor: Hernan Zapata Luque (215284)
// Fecha: 11/04/2024
// Idea del programa: Este programa permite calcular diversas operaciones matem�ticas,
// incluyendo sumatorias, factorial y t�rminos de la secuencia de Fibonacci.

void sumatoriaUno(int n, int inicio) {
    int suma = 0;
    cout << "Secuencia: ";
    for (int i = inicio; i <= n; ++i) {
        suma += 1;
        cout << "1 ";
    }
    cout << endl;
    cout << "Sumatoria: " << suma << endl;
}

void sumatoriaDos(int n, int inicio) {
    int suma = 0;
    cout << "Secuencia: ";
    for (int i = inicio; i <= n; ++i) {
        suma += i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Sumatoria: " << suma << endl;
}

void sumatoriaTres(int n, int inicio) {
    int suma = 0;
    cout << "Secuencia: ";
    for (int i = inicio; i <= n; ++i) {
        suma += i * i;
        cout << i * i << " ";
    }
    cout << endl;
    cout << "Sumatoria: " << suma << endl;
}

void factorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        cout << "Secuencia: 1" << endl;
        cout << "Sumatoria: 1" << endl;
    } else {
        int factorial = 1;
        int suma = 1;
        cout << "Secuencia: ";
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
            suma += factorial;
            cout << factorial << " ";
        }
        cout << endl;
        cout << "Sumatoria: " << suma << endl;
    }
}


void fibonacciRecursivo(int n) {
    // La razon por la que se muestra terminos n+1 es poque a diferencia de los otros algoritmos
    // este inica desde 0 y no desde 1
    cout << "---  Ignorar el 0 ---"<<endl;
    if (n <= 0) {
        cout << "Secuencia: 0" << endl;
        cout <<"Suma: "<<n<< endl;
    } else if (n == 1) {
        cout << "Secuencia: 0 1" << endl;
        cout <<"Suma: "<<n<< endl;
    } else {
        cout << "Secuencia: 0 1 ";
        int a = 0;
        int b = 1;
        int c;
        int suma = 1;
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            suma += c;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
        cout << "Sumatoria: " << suma << endl;
    }
}

int main() {
    int opcion, numero, inicio;

    cout << "Introduce un numero (n): ";
    cin >> numero;

    cout << "Selecciona una opcion:" << endl;
    cout << "1. Sumatoria 1" << endl;
    cout << "2. Sumatoria i" << endl;
    cout << "3. Sumatoria i^2" << endl;
    cout << "4. Factorial Recursivo" << endl;
    cout << "5. Fibonacci Recursivo" << endl;
    cin >> opcion;
    cout << "" << endl;

    switch (opcion) {
        case 1:
            cout << "Introduce el valor inicial (i): ";
            cin >> inicio;
            sumatoriaUno(numero, inicio);
            break;
        case 2:
            cout << "Introduce el valor inicial (i): ";
            cin >> inicio;
            sumatoriaDos(numero, inicio);
            break;
        case 3:
            cout << "Introduce el valor inicial (i): ";
            cin >> inicio;
            sumatoriaTres(numero, inicio);
            break;
        case 4:
            factorialRecursivo(numero);
            break;
        case 5:
            fibonacciRecursivo(numero);
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
    return 0;
}
