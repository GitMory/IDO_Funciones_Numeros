#include <iostream>

using namespace std;

// Autor: Hernan Zapata Luque (215284)
// Fecha: 11/04/2024
// Idea del programa: Este programa permite calcular diversas operaciones matemáticas,
// incluyendo sumatorias, factorial y términos de la secuencia de Fibonacci.

int sumatoriaUno(int n, int inicio) {
    int suma = 0;
    cout << "Secuencia: ";
    for (int i = inicio; i <= n; ++i) {
        suma += 1;
        cout << "1 ";
    }
    cout << endl;
    return suma;
}

int sumatoriaDos(int n, int inicio) {
    int suma = 0;
    cout << "Secuencia: ";
    for (int i = inicio; i <= n; ++i) {
        suma += i;
        cout << i << " ";
    }
    cout << endl;
    return suma;
}

int sumatoriaTres(int n, int inicio) {
    int suma = 0;
    cout << "Secuencia: ";
    for (int i = inicio; i <= n; ++i) {
        suma += i * i;
        cout << i * i << " ";
    }
    cout << endl;
    return suma;
}

int factorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        cout << "Secuencia: 1" << endl;
        return 1;
    } else {
        cout << "Secuencia: ";
        for (int i = 1; i <= n; ++i) {
            cout << i << " ";
        }
        cout << endl;
        return n * factorialRecursivo(n - 1);
    }
}

int fibonacciRecursivo(int n) {
    if (n <= 0) {
        cout << "Secuencia: 0" << endl;
        return 0;
    } else if (n == 1) {
        cout << "Secuencia: 0 1" << endl;
        return 1;
    } else {
        cout << "Secuencia: 0 1 ";
        int a = 0;
        int b = 1;
        int c;
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
        return c;
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
            cout << "La sumatoria es: " << sumatoriaUno(numero, inicio) << endl;
            break;
        case 2:
            cout << "Introduce el valor inicial (i): ";
            cin >> inicio;
            cout << "La sumatoria es: " << sumatoriaDos(numero, inicio) << endl;
            break;
        case 3:
            cout << "Introduce el valor inicial (i): ";
            cin >> inicio;
            cout << "La sumatoria es: " << sumatoriaTres(numero, inicio) << endl;
            break;
        case 4:
            cout << "El factorial de " << numero << " es: " << factorialRecursivo(numero) << endl;
            break;
        case 5:
            cout << "El termino " << numero << " de la secuencia de Fibonacci es: " << fibonacciRecursivo(numero) << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
    return 0;
}
